# Malware Dev Notes

A collection of code snippets and common techniques used in malware, for educational and defensive research purposes.

> **This repository does not contain live, functional, or weaponized malware.**
> Snippets here are conceptual illustrations used to explain a technique — not working payloads.
> No live malicious code, exploits, or working payloads.
> No links to active C2 infrastructure or live samples.
> Reference only publicly disclosed threats (CVEs, vendor write-ups, MITRE ATT&CK entries).

## Purpose

This repo documents how certain malicious techniques work conceptually; the goal is to build defensive and analytical skill, not to provide
copy-paste offensive tooling.

## Intended Audience

- SOC analysts and incident responders
- Malware reverse engineers / DFIR practitioners
- Students in security research or CTF training

## Safety Notes

Any hands-on analysis referenced here assumes use of an isolated, network-segmented VM/sandbox (e.g., FLARE-VM, REMnux) — never analyze live samples on a host connected to a production network.

## Disclaimer

This project is for educational and defensive research purposes only.
Content is intended to help defenders understand adversary techniques.
The maintainers do not condone or support the use of this material to
create, deploy, or distribute malicious software. Use responsibly and in
accordance with your local laws and your organization's policies.

## License
MIT License

Copyright (c) 2026

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
