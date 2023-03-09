
impl Solution {
    pub fn minimum_recolors(blocks: String, k: i32) -> i32 {
        let mut win = vec![];
        let mut ans = 0x3f3f3f3f;
        let mut cur = 0;
        for i in 0..blocks.len() {
            if (win.len() < k) {
                win.push(blocks[i]);
                if (blocks[i] == 'W') {
                    cur += 1;
                }
                continue;
            }
            ans = min(ans, cur);
            if (win[win.len() - k] == 'W') {
                cur -= 1;
            }
            if (blocks[i] == 'W') {
                cur += 1;
            }
            ans = min(ans, cur);
        }
        ans
    }
}
fn main() {
    println!("{}", Solution.minimum_recolors(String::from("WBBWWBBWBW"), 7));
}
