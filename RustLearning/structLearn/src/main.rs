struct User {
    username: String,
    email: String,
    sign_in_count: u64,
    active: bool,
}
fn User_Builder(username: String, email: String) -> User {
    User {
        email,
        username,
        active: true,
        sign_in_count: 1,
    }
}
fn main() {
    let mut user1 = User {
        email: String::from("abncde@gmail.com"),
        username: String::from("LightString"),
        active: true,
        sign_in_count: 1,
    };
    user1.email = String::from("LightString@gmail.com");
    let mut user1 = User_Builder(String::from("LightString"), String::from("LightString@gmail.com"));
    println!("{}, {}", user1.email, user1.username);
}
