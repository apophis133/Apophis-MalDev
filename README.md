# Apophis MalDev Notes

A defensive reference for understanding behaviors commonly observed during malware analysis. The repository organizes conceptual examples by [MITRE ATT&CK](https://attack.mitre.org/) technique so analysts can connect implementation patterns with detection and investigation guidance.

> [!CAUTION]
> This repository is for educational and defensive research only. Use an isolated, network-segmented lab such as FLARE-VM or REMnux. Never test unknown code or samples on production systems.

## Repository goals

- Explain adversary behaviors from a defender's perspective.
- Map examples to public MITRE ATT&CK techniques and sub-techniques.
- Highlight useful telemetry, investigation questions, and mitigations.
- Keep content navigable for SOC, DFIR, reverse-engineering, and security students.

This repository is not intended to provide deployable malware, exploits, payloads, command-and-control infrastructure, or evasion tooling.

## Technique index

| ATT&CK technique | Topic | Content |
| --- | --- | --- |
| [T1547](https://attack.mitre.org/techniques/T1547/) | Boot or Logon Autostart Execution | [Overview](T1547/README.md) |


Content follows this convention:

```text
T####/                 ATT&CK technique
└── ###/                Sub-technique identifier
    ├── README.md       Defensive analysis notes
    └── <example files>
```

## Intended audience

- SOC analysts and incident responders
- Malware reverse engineers and DFIR practitioners
- Security researchers and students working in controlled labs

## Disclaimer

The maintainers do not condone or support creating, deploying, or distributing malicious software. Use this material responsibly and in accordance with applicable laws, organizational policies, and authorization boundaries.

## License

Licensed under the [MIT License](LICENSE).
