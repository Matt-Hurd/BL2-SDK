# UnrealEngine PythonSDK
An UnrealEngine Plugin that enables using Python to write plugins that interact directly with UE objects.

It is used to write mods for [compatible games](#list-of-compatible-games), and comes with a number of [builtin mods](#builtin-mods).

## General information
* Website: https://bl-sdk.github.io
* Mods list: https://bl-sdk.github.io/mods/
* Source code: https://github.com/bl-sdk/PythonSDK
* Issue tracker: https://github.com/bl-sdk/PythonSDK/issues
* Discord: https://discord.gg/VJXtHvh

## List of compatible games
* Borderlands 2 (1.8.7)
* Borderlands: The Pre-Sequel!

## Installation

1. [Download the latest version of `PythonSDK.zip`](https://github.com/Matt-Hurd/BL2-SDK/releases):

![PythonSDK Download Page](https://i.imgur.com/tBlidGi.png)

2. Open `PythonSDK.zip`. It should contain 4 items:

![PythonSDK.zip Contents](https://i.imgur.com/jd77dnB.png)

3. Locate your game's files. In Steam, this can be done by right-clicking on the game in your library, selecting "Properties," then in the "Local Files" section, clicking "Browse":

![Steam Contextual Menu](https://i.imgur.com/eyfn3ht.png) ![Steam Local Files Properties](https://i.imgur.com/wok2ZUA.png)

4. In the game's files, navigate to the `Binaries`, then the `Win32` folder. This folder should contain the `.exe` for your game (i.e. `Borderlands2.exe` or `BorderlandsPreSequel.exe`).

5. Copy the 4 items from `PythonSDK.zip` **exactly as they are** to the `Win32` folder. Note that `pythonXX.zip` should *not* be un-zipped:

![Win32 Folder Contents](https://i.imgur.com/hIvNi7w.png)

6. If you had previously installed an older version of the SDK, delete any old files that weren't overwritten by the ones in the latest `PythonSDK.zip`.

7. You are done, and may launch the game (if it is running, relaunch it now). You should see a "Mods" menu in the main menu!

8. If the SDK fails to run with the files correctly in place as described above, you may need to download and install [Microsoft Visual C++ Redistributable](https://aka.ms/vs/16/release/vc_redist.x86.exe).

### Linux (SteamPlay/Proton and Wine)

PythonSDK does not yet work natively on Linux, but it seems to work well under SteamPlay/Proton and Wine.  To load properly, though, Wine needs to be told to allow `ddraw.dll` overrides.  Additionally, the latest SDK release (as of February 29, 2020) wants the main executable name to be `Borderlands2.exe`, so the common workaround of a `Launcher.exe` symlink/copy won't do the trick.  Instead, set the game's launch options (via `Properties -> General`) to:

    WINEDLLOVERRIDES="ddraw=n,b" bash -c 'exec "${@/Launcher.exe/Borderlands2.exe}"' -- %command%

Or, for TPS:

    WINEDLLOVERRIDES="ddraw=n,b" bash -c 'exec "${@/Launcher.exe/BorderlandsPreSequel.exe}"' -- %command%

Note that using `WINEDLLOVERRIDES` for `ddraw` isn't supported by the Wine developers, so if you experience problems with the game while using this method, please don't ask the WineHQ team for assistance.

## Borderlands Ingame Mod Manager

On the main menu, `Downloadable Content` is replaced with `Mods`  
![Mods](https://i.imgur.com/HOHcwYh.jpg)  

Mods can be enabled and disabled by selecting them and pressing `Enter`  
![ModManager](https://i.imgur.com/8ZaUsDP.png)

### Builtin Mods
* [Backpack Manager](/Mods/BackpackManager): Customize the size of your character's backpack on the fly!
* [Borderlands 2 Map Reloader](/Mods/Quickload): Quickly farm items and save quit at a button press!
* [Borderlands Easy Read Only](/Mods/ReadOnly): Toggle Read Only on a button press
* [Cross Class Skill Randomizer](/Mods/SkillRandomizer): Randomize all the skills!

### Installing New Mods

Mods live in the `Borderlands 2\Binaries\Win32\Mods` folder. Each mod should be place in it's own subfolder, and contain an `__init__.py`. Example: `Win32\Mods\SkillRandomizer\__init__.py`

## Console Commands

* `py <python code>` runs arbitrary python code.  
* `pyexec <python file>` runs arbitrary python files from `binaries/Win32/Mods/`.