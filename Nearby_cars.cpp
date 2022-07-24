#include <bits/stdc++.h>
using namespace std;

class car
{

public:
    string id;
    int x, y;

    car(string id, int x, int y)
    {
        this->id = id;
        this->x = x;
        this->y = y;
    }

    int dis() const
    {
        return x * x + y * y;
    }
};

class carcomp
{

public:
    bool operator()(const car a, const car b)
    {
        return a.dis() < b.dis();
    }
};

void printnearestcar(vector<car> cars, int k)
{

    priority_queue<car, vector<car>, carcomp> max_heap(cars.begin(), cars.begin() + k);

    for (int i = k; i < cars.size(); i++)
    {
        auto car = cars[i];

        if (car.dis() < max_heap.top().dis())
        {
            max_heap.pop();
            max_heap.push(car);
        }
    }

    vector<car> output;

    while (!max_heap.empty())
    {
        output.push_back(max_heap.top());
        max_heap.pop();
    }

    reverse(output.begin(), output.end());

    for (auto i : output)
    {
        cout << i.id << endl;
    }

    return;
}

// input
// 5 3
// c1  1  1
// c2  2  1
// c3  3  2
// c4  0  1
// c5  2  3

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, K;
    cin >> N >> K;

    string id;
    int x, y;

    vector<car> cars;

    for (int i = 0; i < N; i++)
    {
        cin >> id >> x >> y;
        car Car(id, x, y);
        cars.push_back(Car);
    }

    printnearestcar(cars, K);

    return 0;
}