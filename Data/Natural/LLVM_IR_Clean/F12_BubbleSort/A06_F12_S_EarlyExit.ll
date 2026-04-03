define dso_local void @BubbleSort(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %6
  br label %12
12:
  %13 = load i32, i32* %6
  %14 = load i32, i32* %4
  %15 = sub nsw i32 %14, 1
  %16 = icmp slt i32 %13, %15
  br i1 %16, label %18, label %17
17:
  store i32 2, i32* %7
  br label %78
18:
  store i32 0, i32* %5
  store i32 0, i32* %8
  br label %20
20:
  %21 = load i32, i32* %8
  %22 = load i32, i32* %4
  %23 = load i32, i32* %6
  %24 = sub nsw i32 %22, %23
  %25 = sub nsw i32 %24, 1
  %26 = icmp slt i32 %21, %25
  br i1 %26, label %29, label %27
27:
  store i32 5, i32* %7
  br label %70
29:
  %30 = load i32*, i32** %3
  %31 = load i32, i32* %8
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i32, i32* %30, i64 %32
  %34 = load i32, i32* %33
  %35 = load i32*, i32** %3
  %36 = load i32, i32* %8
  %37 = add nsw i32 %36, 1
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds i32, i32* %35, i64 %38
  %40 = load i32, i32* %39
  %41 = icmp sgt i32 %34, %40
  br i1 %41, label %42, label %66
42:
  %44 = load i32*, i32** %3
  %45 = load i32, i32* %8
  %46 = sext i32 %45 to i64
  %47 = getelementptr inbounds i32, i32* %44, i64 %46
  %48 = load i32, i32* %47
  store i32 %48, i32* %9
  %49 = load i32*, i32** %3
  %50 = load i32, i32* %8
  %51 = add nsw i32 %50, 1
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i32, i32* %49, i64 %52
  %54 = load i32, i32* %53
  %55 = load i32*, i32** %3
  %56 = load i32, i32* %8
  %57 = sext i32 %56 to i64
  %58 = getelementptr inbounds i32, i32* %55, i64 %57
  store i32 %54, i32* %58
  %59 = load i32, i32* %9
  %60 = load i32*, i32** %3
  %61 = load i32, i32* %8
  %62 = add nsw i32 %61, 1
  %63 = sext i32 %62 to i64
  %64 = getelementptr inbounds i32, i32* %60, i64 %63
  store i32 %59, i32* %64
  store i32 1, i32* %5
  br label %66
66:
  br label %67
67:
  %68 = load i32, i32* %8
  %69 = add nsw i32 %68, 1
  store i32 %69, i32* %8
  br label %20
70:
  %71 = load i32, i32* %5
  %72 = icmp ne i32 %71, 0
  br i1 %72, label %74, label %73
73:
  store i32 2, i32* %7
  br label %78
74:
  br label %75
75:
  %76 = load i32, i32* %6
  %77 = add nsw i32 %76, 1
  store i32 %77, i32* %6
  br label %12
78:
  br label %80
80:
  ret void
}
