// Putting manipulation to use
// A music streaming service wants to allow users to manage their playlists in the following ways:
// • At the end of the year, they have a unique feature: users can take their top 10 songs and move
// them to the beginning of the playlist as a Year in Review.
// • Users can reverse their playlist to rediscover old songs they haven’t listened to in a while for
// a specific promotion.
// • Occasionally, when a user buys a new album, they like to insert its tracks in the middle of their
// current playlist and rotate the old favorites to the end to have a mix of new and old songs.
// • For a fresh start in spring, users can fill their playlist with calm and refreshing spring-themed music.

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::vector<std::string> playlist{
        "Song A", "Song B", "Song C", "Song D",
        "Song E", "Song F", "Song G", "Song H",
        "Song I", "Song J", "Song K", "Song L"};
    std::rotate(playlist.rbegin(), playlist.rbegin() + 10, playlist.rend());

    auto printPlaylist = [&]()
    {
        for (const auto &ae : playlist)
            std::cout << ae << " ";
        std::cout << "\n";
    };

    std::cout << "Playlist after rotating top 10 songs: ";
    printPlaylist();
    std::cout << "\n";

    std::reverse(playlist.begin(), playlist.end());
    std::cout << "Reversed platlist: ";
    printPlaylist();

    std::vector<std::string> newAlbum{
        "New Song 1",
        "New Song 2",
        "New Song 3"};
    playlist.insert(playlist.begin() + playlist.size() / 2, newAlbum.begin(), newAlbum.end());
    std::rotate(playlist.begin() + playlist.size() / 2, playlist.end() - newAlbum.size(), playlist.end());

    std::cout << "Playlist afer new album songs and rotation: ";
    printPlaylist();

    std::vector<std::string> springSongs{
        "Spring 1",
        "Spring 2",
        "Spring 3",
        "Spring 4"};
    if (playlist.size() < springSongs.size())
    playlist.resize(springSongs.size());

    // std::fill(playlist.begin(),
            //   playlist.begin() + springSongs.size(),
            //   "Spring Song"); //alternate pg 83

    for (int i = 0; i < springSongs.size(); i++)
    {
        playlist.insert(playlist.begin() + i, springSongs[i]);
    }

    std::cout << "Spring refresh: \n";

    printPlaylist();

    return 0;
}