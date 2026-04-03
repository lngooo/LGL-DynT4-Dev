define dso_local void @BubbleSort(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  br label %10
10:
  %11 = load i32, i32* %5
  %12 = load i32, i32* %4
  %13 = sub nsw i32 %12, 1
  %14 = icmp slt i32 %11, %13
  br i1 %14, label %17, label %15
15:
  store i32 2, i32* %6
  br label %75
17:
  store i32 0, i32* %7
  br label %19
19:
  %20 = load i32, i32* %7
  %21 = load i32, i32* %4
  %22 = load i32, i32* %5
  %23 = sub nsw i32 %21, %22
  %24 = sub nsw i32 %23, 1
  %25 = icmp slt i32 %20, %24
  br i1 %25, label %28, label %26
26:
  store i32 5, i32* %6
  br label %71
28:
  %29 = load i32*, i32** %3
  %30 = load i32, i32* %7
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds i32, i32* %29, i64 %31
  %33 = load i32, i32* %32
  %34 = load i32*, i32** %3
  %35 = load i32, i32* %7
  %36 = add nsw i32 %35, 1
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i32, i32* %34, i64 %37
  %39 = load i32, i32* %38
  %40 = icmp sgt i32 %33, %39
  %41 = zext i1 %40 to i32
  switch i32 %41, label %66 [
    i32 1, label %42
  ]
42:
  %44 = load i32*, i32** %3
  %45 = load i32, i32* %7
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i32, i32* %44, i64 %46
  %48 = load i32, i32* %47
  store i32 %48, i32* %8
  %49 = load i32*, i32** %3
  %50 = load i32, i32* %7
  %51 = add nsw i32 %50, 1
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i32, i32* %49, i64 %52
  %54 = load i32, i32* %53
  %55 = load i32*, i32** %3
  %56 = load i32, i32* %7
  %57 = sext i32 %56 to i64
  %58 = getelementptr inbounds i32, i32* %55, i64 %57
  store i32 %54, i32* %58
  %59 = load i32, i32* %8
  %60 = load i32*, i32** %3
  %61 = load i32, i32* %7
  %62 = add nsw i32 %61, 1
  %63 = sext i32 %62 to i64
  %64 = getelementptr inbounds i32, i32* %60, i64 %63
  store i32 %59, i32* %64
  store i32 8, i32* %6
  br label %67
66:
  br label %67
67:
  br label %68
68:
  %69 = load i32, i32* %7
  %70 = add nsw i32 %69, 1
  store i32 %70, i32* %7
  br label %19
71:
  br label %72
72:
  %73 = load i32, i32* %5
  %74 = add nsw i32 %73, 1
  store i32 %74, i32* %5
  br label %10
75:
  ret void
}
