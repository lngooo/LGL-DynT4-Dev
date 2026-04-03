define dso_local void @NfM(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  store i32 0, i32* %6
  br label %14
14:
  %15 = load i32, i32* %5
  %16 = icmp ne i32 %15, 3
  br i1 %16, label %17, label %78
17:
  %18 = load i32, i32* %5
  switch i32 %18, label %77 [
    i32 0, label %19
    i32 1, label %26
    i32 2, label %30
  ]
19:
  %20 = load i32, i32* %6
  %21 = load i32, i32* %4
  %22 = sub nsw i32 %21, 1
  %23 = icmp slt i32 %20, %22
  %24 = zext i1 %23 to i64
  %25 = select i1 %23, i32 1, i32 3
  store i32 %25, i32* %5
  br label %77
26:
  %27 = load i32, i32* %6
  store i32 %27, i32* %7
  %28 = load i32, i32* %6
  %29 = add nsw i32 %28, 1
  store i32 %29, i32* %8
  store i32 2, i32* %5
  br label %77
30:
  br label %31
31:
  %32 = load i32, i32* %8
  %33 = load i32, i32* %4
  %34 = icmp slt i32 %32, %33
  br i1 %34, label %35, label %53
35:
  %36 = load i32*, i32** %3
  %37 = load i32, i32* %8
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i32, i32* %36, i64 %38
  %40 = load i32, i32* %39
  %41 = load i32*, i32** %3
  %42 = load i32, i32* %7
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds i32, i32* %41, i64 %43
  %45 = load i32, i32* %44
  %46 = icmp slt i32 %40, %45
  br i1 %46, label %47, label %49
47:
  %48 = load i32, i32* %8
  store i32 %48, i32* %7
  br label %49
49:
  br label %50
50:
  %51 = load i32, i32* %8
  %52 = add nsw i32 %51, 1
  store i32 %52, i32* %8
  br label %31
53:
  %55 = load i32*, i32** %3
  %56 = load i32, i32* %7
  %57 = sext i32 %56 to i64
  %58 = getelementptr inbounds i32, i32* %55, i64 %57
  %59 = load i32, i32* %58
  store i32 %59, i32* %9
  %60 = load i32*, i32** %3
  %61 = load i32, i32* %6
  %62 = sext i32 %61 to i64
  %63 = getelementptr inbounds i32, i32* %60, i64 %62
  %64 = load i32, i32* %63
  %65 = load i32*, i32** %3
  %66 = load i32, i32* %7
  %67 = sext i32 %66 to i64
  %68 = getelementptr inbounds i32, i32* %65, i64 %67
  store i32 %64, i32* %68
  %69 = load i32, i32* %9
  %70 = load i32*, i32** %3
  %71 = load i32, i32* %6
  %72 = sext i32 %71 to i64
  %73 = getelementptr inbounds i32, i32* %70, i64 %72
  store i32 %69, i32* %73
  %74 = load i32, i32* %6
  %75 = add nsw i32 %74, 1
  store i32 %75, i32* %6
  store i32 0, i32* %5
  br label %77
77:
  br label %14
78:
  ret void
}
