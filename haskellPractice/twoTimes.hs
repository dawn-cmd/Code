twoTimes :: Integral a => a -> a
twoTimes n =
    if test == 0
    then n - 2
    else n * 3 + 1
    where test = mod n 2

main :: IO ()
main = do
    print(twoTimes 101)
