#include <iostream>

int main()
{
    // Image

    const int image_width = 256;
    const int image_height = 256;

    // Render

    std::cout << "P3\n"
              << image_width << " " << image_height << "\n256\n";
}