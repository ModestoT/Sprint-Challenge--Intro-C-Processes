**1. List all of the main states a process may be in at any point in time on a standard Unix system. Briefly explain what each of these states means.**

Start - This is the initial state of a process when it is created or started.
Ready - The state in which the process is waiting to be assigned a processor by the operating system.
Running - State in which the process has been assigned a processor and is now executing the instructions it was given
Waiting - Process moves into a waiting state if it needs additional resources. For example waiting for user input or waiting for a file to be available.
Termiated - When a process is finished executing or the OS has termiated the process it goes into this state to be removed from the main memory.

**2. What is a zombie process?**

A zombie process is a process that has not been ended properly by the parent process after it has finished its execution.

**3. How does a zombie process get created? How does one get destroyed?**

A zombie process is created after it completes its execution. It gets destroyed after the parent process reads the exit status of the child process. If parent finishes it's execution first the zombie process will remain. To stop this we use the wait() function.

**4. What are some of the benefits of working in a compiled language versus a non-compiled language? More specifically, what benefits are there to be had from taking the extra time to compile our code?**

It helps us find syntax error's a bit easier as well as stops us from potentionaly crashing ones computer due to a complier yelling at you when some major is wrong. Overall it's a good safety net.