## 💡 Problem Description

The goal of this project is to develop a program capable of executing and processing a **pseudo-language called `C!`**, which is based on the **C++** language.  
This pseudo-language retains most of C++’s characteristics but includes a **custom graphical interface** that allows users to **visualize how memory spaces are managed** during execution.

---

### 🧩 Project Structure

The system is composed of **two main components**:

#### 🖥️ Server
- Processes the code written in `C!`.
- Manages and simulates **memory space allocation**.
- Handles the **internal logic** of the pseudo-language.

#### ✍️ Editor
- Allows users to **write, send, and execute** source code.
- Visually displays the **simulated memory**.
- Communicates with the server via **sockets**.

---

### 🔌 Communication Between Components

The communication between the **Server** and the **Code Editor interface** is handled through **Sockets**, enabling real-time data exchange and execution synchronization.
