# catch64
[![Actions Status](https://github.com/AssassinTee/catch64/workflows/Build/badge.svg)](https://github.com/AssassinTee/catch64/actions)
[![release version](https://img.shields.io/badge/releases-Unix%20%7C%20Windows%20%7C%20MacOS-brightgreen)](https://github.com/AssassinTee/catch64/releases)
![Teeworlds version](https://img.shields.io/badge/Teeworlds-0.7.5-brightgreen.svg)
[![contributions welcome](https://img.shields.io/badge/contributions-welcome-brightgreen.svg?style=flat)](https://github.com/AssassinTee/catch64/issues)

![Nice](https://i.imgur.com/nhr0NEl.png)
![haha](https://i.imgur.com/PNYZgvm.png)

## Description
catch64 is a -Mod for the retro-multiplayergame [Teeworlds](www.teeworlds.com).
It is written for Teeworlds 0.7 and supports 64 players.
If you hit someone, he is in your team and gets your colors and skin.
If he hits someone, the hit player is in your team, too.
Colorcatch is easy to understand.

## Installing

You need the dependencies for hosting AND/OR compiling the server

```
# Debian/Ubuntu
sudo apt install build-essential cmake git libfreetype6-dev libsdl2-dev libpnglite-dev libwavpack-dev python3

# Fedora
sudo dnf install @development-tools cmake gcc-c++ git freetype-devel mesa-libGLU-devel pnglite-devel python3 SDL2-devel wavpack-devel

# Arch Linux (doesn't have pnglite in its repositories)
sudo pacman -S --needed base-devel cmake freetype2 git glu python sdl2 wavpack

# macOS
sudo brew install cmake freetype sdl2
```

## Getting Started

* clone this repository

* compile the game the same way, you [compile default Teeworlds](https://www.teeworlds.com/?page=docs&wiki=compiling_everything). Remember, that this mod is written for **Teeworlds 0.7.x**. You only need the server, so use the command `<path>/bam conf=release server` for compiling

* start the server with

    * Linux: `./teeworlds_srv` (It may be found under /build)

    * Windows: doubleclick `teeworlds_srv.exe`

* you may have to call the restart command in the admin console (of teeworlds)

* Have Fun!

## Variables

| command                   | default | min | max  | description                         |
| ------------------------- | ------- | --- | ---- | ----------------------------------- |
| sv_allow_pickups          | 0       | 0   | 1    | Spawn hearts and shields            |
| sv_allow_weapon_pickups   | 0       | 0   | 1    | Spawn weapons                       |
| sv_selfkill_cooldown      | 15      | 3   | 9999 | Cooldown after selfkill             |
| sv_win_bonus              | 5       | 0   | 9999 | Bonus for winning a round           |
| sv_min_grenade_damage     | 4       | 0   | 6    | Minimum damage required for a kill  |
| sv_laser_jump             | 1       | 0   | 1    | Activate laser jumping              |
| sv_laser_explosion_damage | 4       | 0   | 6    | Explosion damage of laser jump      |
| sv_random_spawn           | 1       | 0   | 1    | Activates random spawns             |
| sv_random_spawn_tries     | 100     | 0   | 9999 | Tries for players to spawn randomly |
| sv_random_spawn_max_score | 100     | 0   | 9999 | Tries for players to spawn randomly |

## Contributing

Feel free to contribute! In the current project state every feedback is usefull

## Authors

* **AssassinTee** - Everything

## License
This project is licensed under the default Teeworlds license - see [license.txt](https://github.com/AssassinTee/Teeworlds-Zod2/blob/master/license.txt) file for details

## Great Thanks to

* CircleCI integration is awesome, thank you Teeworlds devs!
