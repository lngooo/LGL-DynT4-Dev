define dso_local i32 @LinearSearch(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32
  %5 = alloca i32*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i32* %0, i32** %5
  store i32 %1, i32* %6
  store i32 %2, i32* %7
  store i32 0, i32* %8
  br label %11
11:
  %12 = load i32, i32* %8
  %13 = load i32, i32* %6
  %14 = sub nsw i32 %13, 2
  %15 = icmp sle i32 %12, %14
  br i1 %15, label %16, label %42
16:
  %17 = load i32*, i32** %5
  %18 = load i32, i32* %8
  %19 = sext i32 %18 to i64
  %20 = getelementptr inbounds i32, i32* %17, i64 %19
  %21 = load i32, i32* %20
  %22 = load i32, i32* %7
  %23 = icmp eq i32 %21, %22
  br i1 %23, label %24, label %26
24:
  %25 = load i32, i32* %8
  store i32 %25, i32* %4
  store i32 1, i32* %9
  br label %62
26:
  %27 = load i32*, i32** %5
  %28 = load i32, i32* %8
  %29 = add nsw i32 %28, 1
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i32, i32* %27, i64 %30
  %32 = load i32, i32* %31
  %33 = load i32, i32* %7
  %34 = icmp eq i32 %32, %33
  br i1 %34, label %35, label %38
35:
  %36 = load i32, i32* %8
  %37 = add nsw i32 %36, 1
  store i32 %37, i32* %4
  store i32 1, i32* %9
  br label %62
38:
  br label %39
39:
  %40 = load i32, i32* %8
  %41 = add nsw i32 %40, 2
  store i32 %41, i32* %8
  br label %11
42:
  br label %43
43:
  %44 = load i32, i32* %8
  %45 = load i32, i32* %6
  %46 = icmp slt i32 %44, %45
  br i1 %46, label %47, label %61
47:
  %48 = load i32*, i32** %5
  %49 = load i32, i32* %8
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds i32, i32* %48, i64 %50
  %52 = load i32, i32* %51
  %53 = load i32, i32* %7
  %54 = icmp eq i32 %52, %53
  br i1 %54, label %55, label %57
55:
  %56 = load i32, i32* %8
  store i32 %56, i32* %4
  store i32 1, i32* %9
  br label %62
57:
  br label %58
58:
  %59 = load i32, i32* %8
  %60 = add nsw i32 %59, 1
  store i32 %60, i32* %8
  br label %43
61:
  store i32 -1, i32* %4
  store i32 1, i32* %9
  br label %62
62:
  %64 = load i32, i32* %4
  ret i32 %64
}
