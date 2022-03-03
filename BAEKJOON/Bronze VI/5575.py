
for i in range(3):
    h1, m1, s1, h2, m2, s2 = map(int , input().split())

    time1 =  (h1 * 3600) + (m1 * 60) + s1
    time2 =  (h2 * 3600) + (m2 * 60) + s2

    time = time2 - time1

    h = time // 3600
    m = (time % 3600) // 60
    s = (time % 3600) % 60
    print("{} {} {}".format(h,m,s))



