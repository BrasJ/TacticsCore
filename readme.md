# 🎮 TacticsCore

A modular, expandable grid-based tactics engine written in C++, inspired by games like **Final Fantasy Tactics**, **Fire Emblem**, **XCOM**, and **Triangle Strategy**.

> 🧱 Built to evolve — start in the terminal, scale up to full 2D tactical RPG.

---

## 📦 Features (MVP)
- 2D grid map with unit placement
- Basic turn-based game loop
- Player and enemy unit classes
- Movement system with position updates
- ASCII grid rendering and terminal input

---

## 🚧 Roadmap Highlights
- [ ] Combat system (melee/ranged)
- [ ] Stats, skills, and job classes
- [ ] Pathfinding and AI decision logic
- [ ] Initiative-based turn queue
- [ ] Terrain effects and tile modifiers
- [ ] SDL2/SFML rendering support

See [`TODO.md`](./TODO.md) for the full roadmap.

---

## 🛠 Build Instructions

### Requirements
- C++17 compiler (GCC/Clang/MSVC)
- CMake 3.15+

### Build Steps
```bash
# Clone the repository
$ git clone https://github.com/yourusername/tacticscore.git
$ cd tacticscore

# Create and enter the build directory
$ mkdir build && cd build

# Generate and build
$ cmake ..
$ make

# Run the game
$ ./tacticscore
```

---

## 🗂 Project Structure
```
tacticscore/
├── main.cpp
├── core/           # Game loop, grid, engine logic
├── entities/       # Unit types and actions
├── ai/             # AI behavior and pathfinding
├── io/             # Input handling and UI printing
├── utils/          # Shared helpers like Position
├── data/           # Placeholder for maps and unit data (JSON/YAML)
├── TODO.md         # Project roadmap
└── README.md       # This file
```

---

## 🤝 Contributing

Pull requests and forks are welcome! This is an evolving engine meant to be extended and learned from. If you build something on top of it, share it!

---

## 📜 License

MIT License — feel free to use this as a foundation for your own tactical game.

---

## 💡 Inspiration
- Final Fantasy Tactics (PSX)
- Fire Emblem series (GBA/Switch)
- XCOM: Enemy Unknown (2012)
- Triangle Strategy (Switch)

---

Enjoy building your tactics engine! 🎲

