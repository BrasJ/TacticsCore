# ✅ TacticsCore TODO List

This file outlines the development roadmap for the core systems of the grid-based tactical RPG engine.

---

## 🔧 Core Improvements
- [ ] Add unit attributes/stats (ATK, DEF, MOV, etc.)
- [ ] Implement simple melee combat system
- [ ] Add unit health display to `UIPrinter`
- [ ] Handle unit death (remove from grid + turn queue)

---

## 🧠 AI Logic
- [ ] Implement simple AI move-toward-player behavior
- [ ] Add enemy attack behavior when in range
- [ ] Avoid walking into occupied tiles

---

## 🗺 Grid Enhancements
- [ ] Add terrain types with movement penalties
- [ ] Visualize terrain on the grid printout
- [ ] Add bounds checking to movement input

---

## 🕹 Player Experience
- [ ] Show possible movement range for current unit
- [ ] Let player choose between Move / Attack / Wait
- [ ] Undo last move (basic rollback)

---

## 🔄 Turn System
- [ ] Add initiative-based turn queue (based on speed stat)
- [ ] Display turn order in UI

---

## 📦 Architecture & Maintenance
- [ ] Serialize map and unit data from JSON
- [ ] Add unit tests for movement and combat logic
- [ ] Split combat logic into `CombatSystem` module

---

## 🎨 Future Graphics
- [ ] Plan rendering layer using SDL2
- [ ] Replace console grid with tile rendering
- [ ] Add sprite-based unit representation

