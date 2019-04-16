struct Period {
    start: String,
    baseUrl: String,
    sets: Vec<Adaptations>,
}

struct MPD {
    periods: Option<Vec<Period>>
}

fn main() {
    println!("Hello, world!");
}
