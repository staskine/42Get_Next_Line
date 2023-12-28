# 42_Get_Next_Line

A 42 school curriculum project in C. It returns the first line of the file of file descriptor fd. It's primary use is to read from a file and can then be used with a main to print out the file. 

# What I learned.

This project was a very interesting first dive into memory allocation and how it should be freed properly to make sure there are no memory leaks. I used many functions from my previous project libft for memory allocation. 

This project also served as an introduction to static variables. I find it fascinating how using a single static variable my function can remember where it was after the previous function call. I also used this to make my function slightly faster by checking if there was already a new line present.
