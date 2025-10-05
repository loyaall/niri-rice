# Dependencies

- niri
- fastfetch
- kitty
- swaync
- waybar
- gum
- fzf
- paru
- vicinae (app launcher that I use)
- ddcutil
- (modprobe i2c-dev)
- gammastep
- neovim (if you want)

## Arch Linux
```bash
sudo pacman -S git base-devel
git clone https://aur.archlinux.org/paru-bin
cd paru-bin
makepkg -si
cd ..
paru -Syyu
paru -S niri fastfetch kitty swaync waybar gum fzf vicinae-bin ddcutil gammastep neovim
echo "i2c-dev" | sudo tee -a /etc/modules-load.d/i2c-dev.conf
modprobe i2c-dev (if you need root use it)
```
