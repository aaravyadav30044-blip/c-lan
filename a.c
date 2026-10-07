void overwrite_cells(int *ptr, int count){
    for (; count > 0; count--) { // Reuses the parameter directly without creating middleman space!
        *ptr = 100;
        ptr++;
    }
}