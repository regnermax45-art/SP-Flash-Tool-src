# MaxregnerOS Flash Tool Enhanced - Windows Version

## 🚀 Enhanced Windows Version with SP Flash Tool v5.2228 Libraries

This is the **Windows version** of the MaxregnerOS Flash Tool Enhanced, featuring the latest SP Flash Tool v5.2228 libraries for improved performance and compatibility.

### ✨ Windows Version Features

- **Native Windows Executable**: Cross-compiled for Windows x64
- **Enhanced Libraries**: SP Flash Tool v5.2228 DLLs included
- **Qt4 Support**: Complete Qt4 Windows runtime included
- **SSL Support**: OpenSSL libraries for secure operations
- **All Dependencies Included**: No additional installations required

### 📦 What's Included

**Core Executable:**
- `maxregner_flashtool.exe` - Main MaxregnerOS Flash Tool executable
- `run_maxregner_flashtool.bat` - Easy launch script

**Enhanced Libraries (SP Flash Tool v5.2228):**
- `FlashtoollibEx.dll` (5.05MB) - Enhanced flashing library
- `FlashToolLib.dll` (1.49MB) - Core flashing library  
- `FlashToolLib.v1.dll` (2.98MB) - Version 1 variant
- `SLA_Challenge.dll` (24KB) - Security challenge library
- `libeay32.dll` (1.32MB) - OpenSSL crypto library
- `ssleay32.dll` (311KB) - OpenSSL SSL library

**Qt4 Windows Runtime:**
- `QtCore4.dll` (2.29MB) - Qt Core library
- `QtGui4.dll` (8.22MB) - Qt GUI library
- `QtWebKit4.dll` (10.86MB) - Qt WebKit library
- `QtNetwork4.dll` (975KB) - Qt Network library
- `QtXmlPatterns4.dll` (2.55MB) - Qt XML library
- `msvcp90.dll`, `msvcr90.dll` - Visual C++ runtime

**Firmware Drivers:**
- `DA_PL.bin` (18.56MB) - **Enhanced download agent (doubled size)**
- `DA_PL_CRYPTO20.bin` (18.56MB) - Crypto variant
- `DA_SWSEC.bin` (2.19MB) - Secure software driver
- `MTK_AllInOne_DA.bin` (18.62MB) - **New all-in-one driver**

**Configuration Files:**
- `platform.xml` - Platform definitions
- `console_mode.xsd` - XML schema
- Various `.ini` configuration files

### 🎯 Installation & Usage

#### Quick Start
1. **Extract** the package to any folder
2. **Double-click** `run_maxregner_flashtool.bat`
3. **Follow** the on-screen instructions

#### Command Line Usage
```cmd
REM GUI Mode (Recommended)
run_maxregner_flashtool.bat

REM Console Mode
maxregner_flashtool.exe -i config.xml

REM Help
maxregner_flashtool.exe -h
```

#### Command Line Options
```
Usage: maxregner_flashtool.exe OPTION...
Run FlashTool in console mode.

Mandatory:
  -i    console mode configuration file

Overwriting settings:
  -d    download agent file path
  -s    scatter file path
  -c    flash tool features: format, download, format-download, firmware-upgrade
  -p    specify com port (Windows), format: COM4+COM6 (BROM), COM5 (preloader)

Miscellaneous:
  -r    redirect debug log to parent process
  -h    display this help and exit
  -b    specify whether to reboot after action
```

### ⚠️ Important Warnings

- **MT6761 ONLY**: This tool is exclusively designed for MT6761 chipsets
- **Windows Compatibility**: Tested on Windows 7/8/10/11 x64
- **Administrator Rights**: May require administrator privileges for COM port access
- **Device Drivers**: Ensure proper MediaTek USB drivers are installed
- **Firmware Risk**: Flashing wrong firmware can permanently brick your device
- **Backup First**: Always backup your original firmware before flashing

### 🔧 System Requirements

**Operating System:**
- Windows 7 x64 or later
- Windows 8/8.1/10/11 x64 (recommended)

**Hardware:**
- 2GB RAM minimum, 4GB recommended
- 500MB free disk space
- USB 2.0/3.0 port for device connection

**Dependencies:**
- All required DLLs are included
- No additional installations needed
- MediaTek USB drivers (for device detection)

### 🐛 Troubleshooting

#### DLL Loading Issues
- Ensure all DLL files are in the same folder as the executable
- Run as Administrator if needed
- Check Windows Defender/Antivirus exclusions

#### Device Not Detected
1. Install MediaTek USB drivers
2. Check Device Manager for unknown devices
3. Try different USB cables/ports
4. Run as Administrator

#### COM Port Issues
- Check Device Manager for COM port assignments
- Use format: `-p COM4+COM6` for dual-port devices
- Ensure no other software is using the COM ports

### 📈 Version Information

- **Base Version**: SP Flash Tool v5.2228
- **Enhancement**: MaxregnerOS branding and MT6761 optimization
- **Build Date**: December 2024
- **Architecture**: Windows x64

### 🤝 Support

This is a specialized tool for MT6761 devices running on Windows. Use at your own risk and ensure you have proper firmware backups before flashing.

### 📄 License

Based on MediaTek SP Flash Tool source code. Enhanced for MaxregnerOS compatibility.

---

**⚡ MaxregnerOS Flash Tool Enhanced - Windows Edition**  
**Powered by SP Flash Tool v5.2228 Libraries**