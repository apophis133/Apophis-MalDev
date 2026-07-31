# Contributing

Contributions should improve defensive understanding of publicly documented adversary behaviors. Keep examples bounded, transparent, and useful to analysts.

## Content requirements

Every technique contribution should include:

- A MITRE ATT&CK technique or sub-technique identifier.
- A short description of the behavior and why defenders care.
- Expected data sources and observable artifacts.
- Investigation and mitigation guidance.
- Links to authoritative public references.
- A clear warning when an example may alter a system.

Do not submit:

- Deployable malware, weaponized payloads, exploits, or command-and-control code.
- Credential theft, destructive actions, stealth, evasion, or unauthorized-access tooling.
- Live infrastructure, active samples, secrets, or sensitive victim information.
- Instructions that turn a conceptual example into operational offensive tooling.

## Directory convention

Use ATT&CK identifiers for directories:

```text
T####/
├── README.md
└── ###/
    ├── README.md
    └── <example files>
```

The parent `README.md` introduces the technique and indexes its sub-techniques. Each sub-technique `README.md` should document:

1. Scope
2. Defensive relevance
3. Observable artifacts
4. Investigation ideas
5. Mitigations
6. Included files
7. References

## Pull request checklist

- [ ] The contribution is defensive and tied to a public ATT&CK entry.
- [ ] Documentation explains the behavior without relying on execution.
- [ ] All relative links resolve.
- [ ] Files follow the repository naming convention.
- [ ] No credentials, samples, binaries, or generated build artifacts are included.
- [ ] Any system-changing behavior is clearly disclosed.

By contributing, you agree that your work is licensed under the repository's MIT License.
