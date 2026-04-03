define dso_local void @qCk(i32* %0, i32 %1) {
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
  br label %66
11:
  store i32 1, i32* %5
  br label %13
13:
  %14 = load i32, i32* %5
  %15 = load i32, i32* %4
  %16 = icmp slt i32 %14, %15
  br i1 %16, label %17, label %64
17:
  %19 = load i32*, i32** %3
  %20 = load i32, i32* %5
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds i32, i32* %19, i64 %21
  %23 = load i32, i32* %22
  store i32 %23, i32* %6
  %25 = load i32, i32* %5
  %26 = sub nsw i32 %25, 1
  store i32 %26, i32* %7
  br label %27
27:
  %28 = load i32, i32* %7
  %29 = icmp sge i32 %28, 0
  br i1 %29, label %30, label %38
30:
  %31 = load i32*, i32** %3
  %32 = load i32, i32* %7
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i32, i32* %31, i64 %33
  %35 = load i32, i32* %34
  %36 = load i32, i32* %6
  %37 = icmp sgt i32 %35, %36
  br label %38
38:
  %39 = phi i1 [ false, %27 ], [ %37, %30 ]
  br i1 %39, label %40, label %53
40:
  %41 = load i32*, i32** %3
  %42 = load i32, i32* %7
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds i32, i32* %41, i64 %43
  %45 = load i32, i32* %44
  %46 = load i32*, i32** %3
  %47 = load i32, i32* %7
  %48 = add nsw i32 %47, 1
  %49 = sext i32 %48 to i64
  %50 = getelementptr inbounds i32, i32* %46, i64 %49
  store i32 %45, i32* %50
  %51 = load i32, i32* %7
  %52 = add nsw i32 %51, -1
  store i32 %52, i32* %7
  br label %27
53:
  %54 = load i32, i32* %6
  %55 = load i32*, i32** %3
  %56 = load i32, i32* %7
  %57 = add nsw i32 %56, 1
  %58 = sext i32 %57 to i64
  %59 = getelementptr inbounds i32, i32* %55, i64 %58
  store i32 %54, i32* %59
  %60 = load i32, i32* %5
  %61 = add nsw i32 %60, 1
  store i32 %61, i32* %5
  br label %13
64:
  br label %66
66:
  ret void
}
