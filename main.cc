#include <iostream>

int main()
{
    // Image Variables.

    const int image_width = 256;
    const int image_height = 256;

    // Render Loop.

    std::cout << "P3\n"
              << image_width << " " << image_height << "\n256\n";

    for (int j = image_height - 1; j >= 0; j--)
    {
        // Display render progres.
        std::cerr << "\rScanlines remaining: " << j << " " << std::flush;
        for (int i = 0; i < image_width; i++)
        {
            auto r = double(i) / (image_width - 1);
            auto g = double(j) / (image_height - 1);
            auto b = 0.25;

            // Set colors as 8bits [0 - 255].
            int ir = static_cast<int>(255.999 * r);
            int ig = static_cast<int>(255.999 * g);
            int ib = static_cast<int>(255.999 * b);

            // Print result in the console.
            std::cout << ir << " " << ig << " " << ib << "\n";
        }
    }

    std::cerr << "\nDone.\n";
}