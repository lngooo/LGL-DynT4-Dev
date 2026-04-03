define dso_local void @InsertionSort(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 1, i32* %5
  br label %11
11:
  %12 = load i32, i32* %5
  %13 = load i32, i32* %4
  %14 = icmp slt i32 %12, %13
  br i1 %14, label %15, label %70
15:
  %17 = load i32*, i32** %3
  %18 = load i32, i32* %5
  %19 = sext i32 %18 to i64
  %20 = getelementptr inbounds i32, i32* %17, i64 %19
  %21 = load i32, i32* %20
  store i32 %21, i32* %6
  %23 = load i32, i32* %5
  %24 = sub nsw i32 %23, 1
  store i32 %24, i32* %7
  br label %25
25:
  %26 = load i32, i32* %7
  %27 = icmp sge i32 %26, 0
  br i1 %27, label %28, label %59
28:
  %30 = load i32*, i32** %3
  %31 = load i32, i32* %7
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i32, i32* %30, i64 %32
  %34 = load i32, i32* %33
  %35 = load i32, i32* %6
  %36 = icmp sgt i32 %34, %35
  %37 = zext i1 %36 to i32
  store i32 %37, i32* %8
  %38 = load i32, i32* %8
  %39 = icmp ne i32 %38, 0
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
  br label %54
53:
  store i32 5, i32* %9
  br label %55
54:
  store i32 0, i32* %9
  br label %55
55:
  %57 = load i32, i32* %9
  switch i32 %57, label %72 [
    i32 0, label %58
    i32 5, label %59
  ]
58:
  br label %25
59:
  %60 = load i32, i32* %6
  %61 = load i32*, i32** %3
  %62 = load i32, i32* %7
  %63 = add nsw i32 %62, 1
  %64 = sext i32 %63 to i64
  %65 = getelementptr inbounds i32, i32* %61, i64 %64
  store i32 %60, i32* %65
  %66 = load i32, i32* %5
  %67 = add nsw i32 %66, 1
  store i32 %67, i32* %5
  br label %11
70:
  ret void
72:
  unreachable
}
