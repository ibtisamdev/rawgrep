# rawgrep

A minimal grep clone in modern C++17. A two-week portfolio project to refresh
C++ fundamentals and ship something polished.

> Status: **early development.** A proper README with examples, install
> instructions, and a comparison to `grep` / `ripgrep` lands with the `v0.1.0`
> release. See [`docs/rawgrep-project-plan.md`](docs/rawgrep-project-plan.md)
> for scope, design, and the day-by-day plan.

## Build (work in progress)

```bash
cmake -B build
cmake --build build
./build/rawgrep
```

Requires CMake 3.16+ and a C++17 compiler. Targets Linux and macOS.

## License

MIT — see [`LICENSE`](LICENSE).
