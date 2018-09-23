# Score Tabler

**WIP**

Designed for mahjong use, keeps tracks of scores and outputs to json.

## Building

1. Source the included `env` script. This will configure `vcpkg` automatically.

        $ source env

1. Build out-of-tree with your preferred method. Example using `ninja`:

        $ mkdir build && cd build
        build $ cmake .. -GNinja
        build $ ninja

## Running

1. After building, run the main executable.

        build $ ./src/score_tabler
