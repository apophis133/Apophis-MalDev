# T1547: Boot or Logon Autostart Execution

Adversaries may configure programs to run during system startup or user logon. Defenders investigate these locations because they can reveal persistence, legitimate software configuration, or administrative activity that requires context.

MITRE ATT&CK reference: [T1547](https://attack.mitre.org/techniques/T1547/)

## Defensive focus

Useful investigation themes include:

- Newly created or modified autostart entries
- Unusual executable paths or user-writable locations
- Unsigned or unexpected binaries launched at logon
- Changes that occur shortly after an initial-access or execution event
- Persistence entries associated with rare parent processes or accounts

Correlate configuration changes with process, file, registry, identity, and endpoint telemetry. An autostart entry alone is not proof of malicious activity.

## Sub-techniques

| Sub-technique | Description | Notes |
| --- | --- | --- |
| [T1547.001](https://attack.mitre.org/techniques/T1547/001/) | Registry Run Keys / Startup Folder | [Defensive notes](001/README.md) |

## References

- [MITRE ATT&CK: Boot or Logon Autostart Execution](https://attack.mitre.org/techniques/T1547/)
- [MITRE ATT&CK data sources](https://attack.mitre.org/datasources/)
