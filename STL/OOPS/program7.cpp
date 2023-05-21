#include <iostream>
#include <string>

// Base class: Media
class Media {
protected:
    std::string title;
    float price;

public:
    Media(const std::string& t, float p) : title(t), price(p) {}

    // Virtual function for displaying media information
    virtual void display() const {
        std::cout << "Title: " << title << std::endl;
        std::cout << "Price: $" << price << std::endl;
    }
};

// Derived class: Book
class Book : public Media {
private:
    int numPages;

public:
    Book(const std::string& t, float p, int pages) : Media(t, p), numPages(pages) {}

    // Override the display function to include numPages
    void display() const override {
        Media::display();
        std::cout << "Number of Pages: " << numPages << std::endl;
    }
};

// Derived class: VideoTape
class VideoTape : public Media {
private:
    int playingTime;

public:
    VideoTape(const std::string& t, float p, int time) : Media(t, p), playingTime(time) {}

    // Override the display function to include playingTime
    void display() const override {
        Media::display();
        std::cout << "Playing Time: " << playingTime << " minutes" << std::endl;
    }
};

int main() {
    // Create Media objects of different types
    Media* media1 = new Media("Generic Media", 9.99);
    Media* media2 = new Book("The Great Gatsby", 14.99, 180);
    Media* media3 = new VideoTape("Star Wars", 19.99, 120);

    // Display information using polymorphism
    media1->display();
    std::cout << "------------------------" << std::endl;
    media2->display();
    std::cout << "------------------------" << std::endl;
    media3->display();

    // Clean up memory
    delete media1;
    delete media2;
    delete media3;

    return 0;
}
