# SUIDWrapper
A simple wrapper tool for executing binaries with SUID.

This tool is useful for any situation where permission attributes can be copied from one binary to another (e.x. when the cp tool has SUID set).

By copying the SUID permission bit to this wrapper any binary can be executed with SUID permissions without modifying any existing binaries on the system.
