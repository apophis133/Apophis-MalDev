# T1547.001: Registry Run Keys / Startup Folder

Windows Registry Run keys and Startup folders can launch programs when a user signs in. These locations are also used by legitimate applications, so detections should combine the persistence location with file reputation, path, signer, process ancestry, user context, and timing.

MITRE ATT&CK reference: [T1547.001](https://attack.mitre.org/techniques/T1547/001/)

## Defensive relevance

Monitor for unexpected creation or modification of common Run and RunOnce values, especially when the referenced file is newly created, unsigned, uncommon in the environment, or stored in a user-writable directory.

## Observable artifacts

Potential evidence sources include:

- Registry value creation and modification events
- Endpoint process and command-line telemetry
- File creation, signer, hash, and reputation data
- User logon events and account context
- Autoruns or equivalent triage output collected from an approved endpoint

## Investigation ideas

1. Identify the account and process responsible for the change.
2. Review the referenced path, file metadata, signer, hash, and prevalence.
3. Establish whether the entry is expected software or an approved administrative change.
4. Correlate the timestamp with file creation, execution, download, and logon activity.
5. Search the environment for the same value name, path, or file hash.

Do not delete an entry before preserving relevant evidence and confirming that removal will not disrupt legitimate software.

## Mitigations

- Restrict administrative access and monitor privileged changes.
- Use application control where appropriate.
- Baseline approved autostart entries and investigate meaningful deviations.
- Centralize endpoint and registry telemetry for correlation.
- Follow the organization's incident-response process for containment and remediation.

## Included file

- [`svchost.c`](svchost.c) — a Windows Registry example retained as research material. It contains system-changing behavior and should be reviewed statically rather than compiled or executed.

## References

- [MITRE ATT&CK: Registry Run Keys / Startup Folder](https://attack.mitre.org/techniques/T1547/001/)
- [Microsoft Sysinternals Autoruns](https://learn.microsoft.com/sysinternals/downloads/autoruns)
- [Microsoft: Run and RunOnce Registry keys](https://learn.microsoft.com/windows/win32/setupapi/run-and-runonce-registry-keys)
