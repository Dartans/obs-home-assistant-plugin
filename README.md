# obs-home-assistant-plugin
Plugin to watch changes on webpage in obs to trigger home assistant for custom triggers

```markdown
# OBS Web Monitor Plugin

## Overview

The OBS Web Monitor Plugin monitors a specified webpage for changes, records those changes, and allows users to map the changes to Home Assistant API endpoints. This plugin provides a GUI for dynamic mapping of webpage changes to Home Assistant entities.

## Features

- Monitors a webpage for changes at regular intervals
- Records and notifies changes
- Provides a GUI for mapping changes to Home Assistant API endpoints
- Dynamically fetches Home Assistant entities and endpoints

## Requirements

- OBS Studio (version 27.0 or higher)
- CMake (version 3.10 or higher)
- libcurl (for HTTP requests)
- JSON for Modern C++ (for JSON parsing)

## Installation

1. Clone the repository:

   ```bash
   git clone https://github.com/yourusername/obs-web-monitor-plugin.git
   cd obs-web-monitor-plugin
   ```

2. Build the plugin using CMake:

   ```bash
   mkdir build
   cd build
   cmake ..
   make
   ```

3. Copy the built plugin to the OBS Studio plugins directory:

   ```bash
   cp libobs-web-monitor-plugin.so /path/to/obs-studio/plugins/
   ```

4. Restart OBS Studio to load the plugin.

## Configuration

1. Open OBS Studio.
2. Go to the `Tools` menu and select `Web Monitor Plugin`.
3. In the plugin window, enter the URL of the webpage to monitor.
4. Map the detected changes to Home Assistant entities using the provided GUI.

## Usage

1. Start OBS Studio and ensure the plugin is loaded.
2. Configure the plugin with the webpage URL and Home Assistant API details.
3. Monitor the plugin window for detected changes and map them to the desired Home Assistant endpoints.

## Development

### Building from Source

1. Ensure you have the required dependencies installed.
2. Clone the repository and build using CMake as described in the Installation section.

### Contributing

Contributions are welcome! Please submit pull requests or open issues for any changes or bug reports.

### License

This project is licensed under the GPLv2 License. See the [LICENSE](LICENSE) file for details.

## Support

For support and inquiries, please open an issue on the [GitHub repository](https://github.com/Dartans/obs-home-assistant-plugin/issues).

## Acknowledgements

- [OBS Studio](https://obsproject.com/) for providing the platform.
- [libcurl](https://curl.se/libcurl/) for HTTP requests.
- [JSON for Modern C++](https://github.com/nlohmann/json) for JSON parsing.
```

Feel free to adjust any URLs, paths, or additional details as needed for your specific project.
