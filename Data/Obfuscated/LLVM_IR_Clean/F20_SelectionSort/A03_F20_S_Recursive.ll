define dso_local void @R(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %8 = load i32, i32* %4
  %9 = icmp sle i32 %8, 1
  br i1 %9, label %10, label %11
10:
  br label %61
11:
  store i32 0, i32* %5
  store i32 1, i32* %6
  br label %14
14:
  %15 = load i32, i32* %6
  %16 = load i32, i32* %4
  %17 = icmp slt i32 %15, %16
  br i1 %17, label %20, label %18
18:
  br label %38
20:
  %21 = load i32*, i32** %3
  %22 = load i32, i32* %6
  %23 = sext i32 %22 to i64
  %24 = getelementptr inbounds i32, i32* %21, i64 %23
  %25 = load i32, i32* %24
  %26 = load i32*, i32** %3
  %27 = load i32, i32* %5
  %28 = sext i32 %27 to i64
  %29 = getelementptr inbounds i32, i32* %26, i64 %28
  %30 = load i32, i32* %29
  %31 = icmp slt i32 %25, %30
  br i1 %31, label %32, label %34
32:
  %33 = load i32, i32* %6
  store i32 %33, i32* %5
  br label %34
34:
  br label %35
35:
  %36 = load i32, i32* %6
  %37 = add nsw i32 %36, 1
  store i32 %37, i32* %6
  br label %14
38:
  %40 = load i32*, i32** %3
  %41 = getelementptr inbounds i32, i32* %40, i64 0
  %42 = load i32, i32* %41
  store i32 %42, i32* %7
  %43 = load i32*, i32** %3
  %44 = load i32, i32* %5
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds i32, i32* %43, i64 %45
  %47 = load i32, i32* %46
  %48 = load i32*, i32** %3
  %49 = getelementptr inbounds i32, i32* %48, i64 0
  store i32 %47, i32* %49
  %50 = load i32, i32* %7
  %51 = load i32*, i32** %3
  %52 = load i32, i32* %5
  %53 = sext i32 %52 to i64
  %54 = getelementptr inbounds i32, i32* %51, i64 %53
  store i32 %50, i32* %54
  %55 = load i32*, i32** %3
  %56 = getelementptr inbounds i32, i32* %55, i64 1
  %57 = load i32, i32* %4
  %58 = sub nsw i32 %57, 1
  call void @R(i32* %56, i32 %58)
  br label %61
61:
  ret void
}
