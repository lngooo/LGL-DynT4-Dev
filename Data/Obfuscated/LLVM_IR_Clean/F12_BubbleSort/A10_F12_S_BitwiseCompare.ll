define dso_local void @KJ(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %5
  br label %12
12:
  %13 = load i32, i32* %5
  %14 = load i32, i32* %4
  %15 = sub nsw i32 %14, 1
  %16 = icmp slt i32 %13, %15
  br i1 %16, label %19, label %17
17:
  store i32 2, i32* %6
  br label %84
19:
  store i32 0, i32* %7
  br label %21
21:
  %22 = load i32, i32* %7
  %23 = load i32, i32* %4
  %24 = load i32, i32* %5
  %25 = sub nsw i32 %23, %24
  %26 = sub nsw i32 %25, 1
  %27 = icmp slt i32 %22, %26
  br i1 %27, label %30, label %28
28:
  store i32 5, i32* %6
  br label %80
30:
  %32 = load i32*, i32** %3
  %33 = load i32, i32* %7
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i32, i32* %32, i64 %34
  %36 = load i32, i32* %35
  %37 = load i32*, i32** %3
  %38 = load i32, i32* %7
  %39 = add nsw i32 %38, 1
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i32, i32* %37, i64 %40
  %42 = load i32, i32* %41
  %43 = sub nsw i32 %36, %42
  store i32 %43, i32* %8
  %45 = load i32, i32* %8
  %46 = icmp sgt i32 %45, 0
  %47 = zext i1 %46 to i32
  store i32 %47, i32* %9
  %48 = load i32, i32* %9
  %49 = icmp ne i32 %48, 0
  br i1 %49, label %50, label %74
50:
  %52 = load i32*, i32** %3
  %53 = load i32, i32* %7
  %54 = sext i32 %53 to i64
  %55 = getelementptr inbounds i32, i32* %52, i64 %54
  %56 = load i32, i32* %55
  store i32 %56, i32* %10
  %57 = load i32*, i32** %3
  %58 = load i32, i32* %7
  %59 = add nsw i32 %58, 1
  %60 = sext i32 %59 to i64
  %61 = getelementptr inbounds i32, i32* %57, i64 %60
  %62 = load i32, i32* %61
  %63 = load i32*, i32** %3
  %64 = load i32, i32* %7
  %65 = sext i32 %64 to i64
  %66 = getelementptr inbounds i32, i32* %63, i64 %65
  store i32 %62, i32* %66
  %67 = load i32, i32* %10
  %68 = load i32*, i32** %3
  %69 = load i32, i32* %7
  %70 = add nsw i32 %69, 1
  %71 = sext i32 %70 to i64
  %72 = getelementptr inbounds i32, i32* %68, i64 %71
  store i32 %67, i32* %72
  br label %74
74:
  br label %77
77:
  %78 = load i32, i32* %7
  %79 = add nsw i32 %78, 1
  store i32 %79, i32* %7
  br label %21
80:
  br label %81
81:
  %82 = load i32, i32* %5
  %83 = add nsw i32 %82, 1
  store i32 %83, i32* %5
  br label %12
84:
  ret void
}
