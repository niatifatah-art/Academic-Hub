Lecture Notes: Process Monitoring and Control
Subject: Open Source Systems

Topic: ps, top, htop, and the kill command

A Linux administrator must maintain full visibility over system resources. Every task, from a simple echo to a complex Python script, is a process with a unique ID (PID).

1. Monitoring Active Processes: top and ps
To see what is currently running and how much CPU/RAM is being consumed.

top: Provides a real-time, dynamic view of the system.

ps aux: Provides a static "snapshot" of all running processes in detail.

Professor's Example:
Bash
# Displaying all processes and filtering for a specific one (e.g., python)
ps aux | grep "python"
2. Terminating Processes: The kill Command
When a process becomes unresponsive or is unauthorized, you must terminate it using its PID (Process ID).

Syntax: kill <PID>

Forced Termination: kill -9 <PID> (Use this only as a last resort).

3. Background and Foreground Tasks
&: Adding this to the end of a command runs it in the background.

jobs: Lists tasks running in the background of your current session.

fg: Brings a background task back to the foreground.