# Score Tabler

**WIP**

Designed for mahjong use, keeps tracks of scores and outputs to json.

## Building

1. Install Conan if you don't already have it (requires Python):

        $ pip install --user conan

1. Build out-of-tree with your preferred method. Example using `ninja`:

        $ mkdir build && cd build
        build $ conan install ..
        build $ cmake .. -GNinja
        build $ ninja

## Running

1. After building, run the main executable.

        build $ ./src/score_tabler
