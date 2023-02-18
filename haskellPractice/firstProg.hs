main :: IO()
main = do
    print "Who is email for?"
    recipient <- getLine
    print "What is the Title?"
    title <- getLine
    print "Who is the author?"
