define dso_local i32 @t(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  store i32* %0, i32** %5
  store i32 %1, i32* %6
  store i32 %2, i32* %7
  store i32 0, i32* %8
  %15 = load i32, i32* %6
  %16 = sub nsw i32 %15, 1
  store i32 %16, i32* %9
  store i32 0, i32* %11
  br label %19
19:
  %20 = load i32, i32* %11
  %21 = icmp ne i32 %20, -1
  br i1 %21, label %22, label %66
22:
  %23 = load i32, i32* %11
  switch i32 %23, label %65 [
    i32 0, label %24
    i32 1, label %30
    i32 2, label %46
    i32 3, label %48
    i32 4, label %58
    i32 5, label %61
    i32 6, label %62
  ]
24:
  %25 = load i32, i32* %8
  %26 = load i32, i32* %9
  %27 = icmp sle i32 %25, %26
  %28 = zext i1 %27 to i64
  %29 = select i1 %27, i32 1, i32 5
  store i32 %29, i32* %11
  br label %65
30:
  %31 = load i32, i32* %8
  %32 = load i32, i32* %9
  %33 = load i32, i32* %8
  %34 = sub nsw i32 %32, %33
  %35 = sdiv i32 %34, 2
  %36 = add nsw i32 %31, %35
  store i32 %36, i32* %10
  %37 = load i32*, i32** %5
  %38 = load i32, i32* %10
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i32, i32* %37, i64 %39
  %41 = load i32, i32* %40
  %42 = load i32, i32* %7
  %43 = icmp eq i32 %41, %42
  %44 = zext i1 %43 to i64
  %45 = select i1 %43, i32 2, i32 3
  store i32 %45, i32* %11
  br label %65
46:
  %47 = load i32, i32* %10
  store i32 %47, i32* %4
  store i32 1, i32* %12
  br label %67
48:
  %49 = load i32*, i32** %5
  %50 = load i32, i32* %10
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i32, i32* %49, i64 %51
  %53 = load i32, i32* %52
  %54 = load i32, i32* %7
  %55 = icmp slt i32 %53, %54
  %56 = zext i1 %55 to i64
  %57 = select i1 %55, i32 4, i32 6
  store i32 %57, i32* %11
  br label %65
58:
  %59 = load i32, i32* %10
  %60 = add nsw i32 %59, 1
  store i32 %60, i32* %8
  store i32 0, i32* %11
  br label %65
61:
  store i32 -1, i32* %4
  store i32 1, i32* %12
  br label %67
62:
  %63 = load i32, i32* %10
  %64 = sub nsw i32 %63, 1
  store i32 %64, i32* %9
  store i32 0, i32* %11
  br label %65
65:
  br label %19
66:
  store i32 -1, i32* %4
  store i32 1, i32* %12
  br label %67
67:
  %72 = load i32, i32* %4
  ret i32 %72
}
