define dso_local void @jgF(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 1, i32* %5
  br label %11
11:
  %12 = load i32, i32* %5
  %13 = load i32, i32* %4
  %14 = icmp sge i32 %12, %13
  br i1 %14, label %15, label %19
15:
  ret void
19:
  %20 = load i32*, i32** %3
  %21 = load i32, i32* %5
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds i32, i32* %20, i64 %22
  %24 = load i32, i32* %23
  store i32 %24, i32* %7
  %25 = load i32, i32* %5
  %26 = sub nsw i32 %25, 1
  store i32 %26, i32* %6
  br label %27
27:
  %28 = load i32, i32* %6
  %29 = icmp slt i32 %28, 0
  br i1 %29, label %38, label %30
30:
  %31 = load i32*, i32** %3
  %32 = load i32, i32* %6
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i32, i32* %31, i64 %33
  %35 = load i32, i32* %34
  %36 = load i32, i32* %7
  %37 = icmp sle i32 %35, %36
  br i1 %37, label %38, label %39
38:
  br label %52
39:
  %40 = load i32*, i32** %3
  %41 = load i32, i32* %6
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i32, i32* %40, i64 %42
  %44 = load i32, i32* %43
  %45 = load i32*, i32** %3
  %46 = load i32, i32* %6
  %47 = add nsw i32 %46, 1
  %48 = sext i32 %47 to i64
  %49 = getelementptr inbounds i32, i32* %45, i64 %48
  store i32 %44, i32* %49
  %50 = load i32, i32* %6
  %51 = add nsw i32 %50, -1
  store i32 %51, i32* %6
  br label %27
52:
  %53 = load i32, i32* %7
  %54 = load i32*, i32** %3
  %55 = load i32, i32* %6
  %56 = add nsw i32 %55, 1
  %57 = sext i32 %56 to i64
  %58 = getelementptr inbounds i32, i32* %54, i64 %57
  store i32 %53, i32* %58
  %59 = load i32, i32* %5
  %60 = add nsw i32 %59, 1
  store i32 %60, i32* %5
  br label %11
}
