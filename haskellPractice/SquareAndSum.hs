sumSquareOrSumSquare x y = max ((x + y) ^ 2) (x ^ 2 + y ^ 2)

main = do
   print ((\x -> x + 1) ((\x -> x + 1) 4))
