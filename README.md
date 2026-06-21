# DayZ Admin LEHS Override

Part of the **DayZ Admin Tools** suite.

This mod adds administrative variants of the Namalsk LEHS suit and its supporting components for server administration, testing, and event control. It does not replace the original Namalsk items.

## Included items

| Item | Classname | Changes |
| --- | --- | --- |
| Admin LEHS Suit | `Admin_LEHS` | Expanded cargo and attachment slots, maximum insulation, water resistance, and increased durability |
| Admin LEHS Helmet | `Admin_LEHS_Helmet` | Reduced size and weight, with increased durability |
| Admin LEHS Battery | `Admin_LEHS_Battery` | Extended charge, reduced weight, and increased durability |
| Admin LEHS O2 Tank | `Admin_LEHS_O2Tank` | Extended capacity, reduced weight, and increased durability |

## Requirements and compatibility

- Requires **Namalsk Survival** by Sumrak.
- Tested on DayZ 1.28.
- Adds new classnames; it does not override Namalsk or vanilla classes.

Load Namalsk Survival before this mod on both the server and clients.

## Server configuration

The [`server_config`](server_config) directory contains example `types.xml` and `cfgspawnabletypes.xml` entries. Merge their contents into the corresponding files in your mission's `db` directory; do not replace the complete mission files.

All four types have a nominal value of `0`, so the Central Economy will not place them as map loot. The `cfgspawnabletypes.xml` entry equips spawned `Admin_LEHS` suits with the admin battery and O2 tank.

## Intended use

These items are deliberately overpowered and intended for administrators. If they are distributed to regular players, their balance impact is the server owner's responsibility.

## Credits

- Original Namalsk Survival content created by **Sumrak**.
- Additional support and suggestions from **77Nerrad77**, co-owner of New Dawn UK PvE DayZ Servers.

## License

MIT License — free to use, modify, and redistribute with attribution.
