define dso_local i32 @RemoveDuplicates(i32* %0, i32 %1) {
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
  br label %12
12:
  %13 = load i32, i32* %6
  %14 = load i32, i32* %4
  %15 = icmp slt i32 %13, %14
  br i1 %15, label %18, label %16
16:
  store i32 2, i32* %7
  br label %64
18:
  store i32 0, i32* %8
  store i32 0, i32* %9
  br label %21
21:
  %22 = load i32, i32* %9
  %23 = load i32, i32* %5
  %24 = icmp slt i32 %22, %23
  br i1 %24, label %26, label %25
25:
  store i32 5, i32* %7
  br label %43
26:
  %27 = load i32*, i32** %3
  %28 = load i32, i32* %6
  %29 = sext i32 %28 to i64
  %30 = getelementptr inbounds i32, i32* %27, i64 %29
  %31 = load i32, i32* %30
  %32 = load i32*, i32** %3
  %33 = load i32, i32* %9
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i32, i32* %32, i64 %34
  %36 = load i32, i32* %35
  %37 = icmp eq i32 %31, %36
  br i1 %37, label %38, label %39
38:
  store i32 1, i32* %8
  store i32 5, i32* %7
  br label %43
39:
  br label %40
40:
  %41 = load i32, i32* %9
  %42 = add nsw i32 %41, 1
  store i32 %42, i32* %9
  br label %21
43:
  br label %45
45:
  %46 = load i32, i32* %8
  %47 = icmp ne i32 %46, 0
  br i1 %47, label %59, label %48
48:
  %49 = load i32*, i32** %3
  %50 = load i32, i32* %6
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i32, i32* %49, i64 %51
  %53 = load i32, i32* %52
  %54 = load i32*, i32** %3
  %55 = load i32, i32* %5
  %56 = add nsw i32 %55, 1
  store i32 %56, i32* %5
  %57 = sext i32 %55 to i64
  %58 = getelementptr inbounds i32, i32* %54, i64 %57
  store i32 %53, i32* %58
  br label %59
59:
  br label %61
61:
  %62 = load i32, i32* %6
  %63 = add nsw i32 %62, 1
  store i32 %63, i32* %6
  br label %12
64:
  %65 = load i32, i32* %5
  store i32 1, i32* %7
  ret i32 %65
}
