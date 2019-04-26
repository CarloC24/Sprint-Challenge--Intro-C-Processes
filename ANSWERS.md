**1. List all of the main states a process may be in at any point in time on a standard Unix system. Briefly explain what each of these states means.**
Created State - When we first make a process and almost at the "Ready" State.

Ready State - When our process gets loaded in the heap. And gets ready to be executed.

Running State - When our process gets executed by one of our cores in our CPU.

Blocked State - When our process gets blocked/stopped from executing because it could not go on its own. Like printers for example. Printers need for us to put in input so the process can run.

Terminated State - When we finally call wait() on our process and kill our zombie processes by reading its exit status.

**2. What is a zombie process?**
Say we forked our C program and we have a bunch of child processes. After a child executes it reports back to its parent and it doesnt terminate itself. Until we call wait(null) on the parent to kill its child process.

**3. How does a zombie process get created? How does one get destroyed?**
We create a child process using fork();
We destroy a child process by using wait() on the parent that we created.

**4. What are some of the benefits of working in a compiled language versus a non-compiled language? More specifically, what benefits are there to be had from taking the extra time to compile our code?**
The benefits of using a compiled language is that it is more efficient. Because we translate it into native machine code so it becomes native machine language which is more optimized and faster to execute code. The benefits are we dont need a interpreter, a parser, and a custom compiler to execute our code.
