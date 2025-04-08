# 🧠 Anscer Project

This repository contains the **Anscer Project**, a robot simulation and trajectory visualization system using ROS 2, Gazebo, and RViz2. It is built in the `ros2_ws7` workspace and currently tracked under the `master` branch.

---

## 📦 Dependencies

Before launching the project, make sure the following packages and tools are **pre-installed**:

- **ROS 2 Humble**
- **Gazebo** (with TurtleBot3 world support)
- **RViz2**
- `turtlebot3_gazebo`
- `turtlebot3_navigation2`

> ✅ Don’t forget to set the TurtleBot3 model:
```bash
export TURTLEBOT3_MODEL=waffle
```


🚀 Getting Started
Clone the Repository

git clone git@github.com:Asd1agd/Anscer_project_repo.git
cd Anscer_project_repo/ros2_ws7
colcon build
source install/setup.bash

🧩 Project Structure

Anscer_project_repo/
├── ros2_ws7/
│   ├── src/
│   │   └── bring_up_anscer/
│   │       ├── launch/
│   │       │   └── combined.launch.xml
│   │       ├── package.xml
│   │       └── CMakeLists.txt
│   ├── install/
│   └── README.md

📽️ Running the Simulation

Open three separate terminals and execute the following commands:
🧠 Terminal 1 – Bring up all Anscer services and nodes:

ros2 launch bring_up_anscer combined.launch.xml

🌍 Terminal 2 – Launch Gazebo with TurtleBot3 world:

ros2 launch turtlebot3_gazebo turtlebot3_world.launch.py

🗺️ Terminal 3 – Launch Navigation Stack:

ros2 launch turtlebot3_navigation2 navigation2.launch.py

Once all nodes are launched, your project will simulate the robot and visualize/save its trajectory in RViz2.
🧠 Functionality
🛤️ Real-time Trajectory Saving (Service 1)

The node trajectory_publisher_saver.py:

    Subscribes to /odom

    Continuously saves position and orientation data

    Publishes:

        Line Strip markers (path trace)

        Arrow markers (heading direction)

It provides a ROS 2 service named /save_trajectory which allows you to save the trajectory of the robot from a specified number of seconds in the past.
📦 Service: TimeInSec.srv

    Request: float32 time_sec

    Saves to:
    /home/asd/ros2_ws7/trajectories/trajectory_<timestamp>_<duration>s.csv

📈 Load and Visualize Saved Trajectories (Service 2)

The node trajectory_visualizer.py:

    Loads CSV files saved using the previous service

    Publishes trajectory data as:

        A Line Strip

        Directional Arrows (heading)

Useful for:

    Playback of previous routes

    Evaluation

    Debugging

📦 Service: CsvPath.srv

    Request: string filepath

    Publishes to: /loaded_trajectory_markers

📂 Trajectory CSV Format

Each saved CSV includes:

time_sec,x,y,z,w
1612381835.23,1.23,0.45,0.00,1.00
...

    x, y, z: Position

    w: Orientation (quaternion)

🙋 Support

For issues, suggestions, or contributions, feel free to raise an Issue or fork this repo.
