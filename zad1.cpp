#include <iostream>
#include <vector>
#include <algorithm>


unsigned int ToMinutes(std::string time_HH_MM);

unsigned int MinimalTimeDifference(std::vector<std::string> times);


int main() {
    std::vector<std::string> times;
    times = {"3:21", "05:19", "4:30", "4:38", "04:35", "23:12"};
    std::cout << MinimalTimeDifference(times);
    return 0;
}


unsigned int ToMinutes(std::string time_HH_MM) {

    std::string hours;
    while (time_HH_MM[0] != ':') {
        hours += time_HH_MM[0];
        time_HH_MM.erase(0, 1);
    }
    time_HH_MM.erase(0, 1);
    return static_cast<unsigned int>(std::stoi(hours) * 60 + std::stoi(time_HH_MM));
}


unsigned int MinimalTimeDifference(std::vector<std::string> times) {

    std::vector<unsigned int> times_in_min;
    auto times_size = static_cast<unsigned int>(times.size());
    times_in_min.reserve(times_size);

    for (const auto &time : times) {
        times_in_min.push_back(ToMinutes(time));
    }

    std::sort(times_in_min.begin(), times_in_min.end());
    unsigned int min_time_dif = times_in_min[times_size - 1] - times_in_min[times_size - 2];

    for (int i = times_size - 2; i > 0; i--) {
        if (times_in_min[i] - times_in_min[i - 1] < min_time_dif) {
            min_time_dif = times_in_min[i] - times_in_min[i - 1];
        }
    }
    return min_time_dif;
}
