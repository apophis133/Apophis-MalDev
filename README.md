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
| [T1547.001](https://attack.mitre.org/techniques/T1547/001/) | Registry Run Keys / Startup Folder | [Source example](T1547/001/svchost.c) |

## Repository structure

```text
.
├── README.md
└── T1547/
    ├── README.md
    └── 001/
        └── svchost.c
```

Content follows this convention:

```text
T####/                 ATT&CK technique
├── README.md           Technique overview and child index
└── ###/                Sub-technique identifier
    └── <example files>
```

## How to use this repository

1. Start with the [technique index](#technique-index).
2. Read the technique overview before reviewing an example.
3. Compare the documented behavior with telemetry from an isolated lab or approved dataset.
4. Follow the linked ATT&CK and vendor references for current detection guidance.

Examples may interact with operating-system features and are not guaranteed to be safe to compile or execute. Treat every source file as untrusted research material.

## Intended audience

- SOC analysts and incident responders
- Malware reverse engineers and DFIR practitioners
- Security researchers and students working in controlled labs

## Disclaimer

The maintainers do not condone or support creating, deploying, or distributing malicious software. Use this material responsibly and in accordance with applicable laws, organizational policies, and authorization boundaries.

## License

Licensed under the [MIT License](LICENSE).
