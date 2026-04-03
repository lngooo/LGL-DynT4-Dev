define dso_local i32 @R(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca [128 x i32]
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %6
  store i32 0, i32* %7
  br label %15
15:
  %16 = load i32, i32* %7
  %17 = load i32, i32* %4
  %18 = icmp slt i32 %16, %17
  br i1 %18, label %21, label %19
19:
  store i32 2, i32* %8
  br label %65
21:
  store i32 0, i32* %9
  store i32 0, i32* %10
  br label %24
24:
  %25 = load i32, i32* %10
  %26 = load i32, i32* %6
  %27 = icmp slt i32 %25, %26
  br i1 %27, label %29, label %28
28:
  store i32 5, i32* %8
  br label %45
29:
  %30 = load i32, i32* %10
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds [128 x i32], [128 x i32]* %5, i64 0, i64 %31
  %33 = load i32, i32* %32
  %34 = load i32*, i32** %3
  %35 = load i32, i32* %7
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i32, i32* %34, i64 %36
  %38 = load i32, i32* %37
  %39 = icmp eq i32 %33, %38
  br i1 %39, label %40, label %41
40:
  store i32 1, i32* %9
  store i32 5, i32* %8
  br label %45
41:
  br label %42
42:
  %43 = load i32, i32* %10
  %44 = add nsw i32 %43, 1
  store i32 %44, i32* %10
  br label %24
45:
  br label %47
47:
  %48 = load i32, i32* %9
  %49 = icmp ne i32 %48, 0
  br i1 %49, label %60, label %50
50:
  %51 = load i32*, i32** %3
  %52 = load i32, i32* %7
  %53 = sext i32 %52 to i64
  %54 = getelementptr inbounds i32, i32* %51, i64 %53
  %55 = load i32, i32* %54
  %56 = load i32, i32* %6
  %57 = add nsw i32 %56, 1
  store i32 %57, i32* %6
  %58 = sext i32 %56 to i64
  %59 = getelementptr inbounds [128 x i32], [128 x i32]* %5, i64 0, i64 %58
  store i32 %55, i32* %59
  br label %60
60:
  br label %62
62:
  %63 = load i32, i32* %7
  %64 = add nsw i32 %63, 1
  store i32 %64, i32* %7
  br label %15
65:
  store i32 0, i32* %11
  br label %67
67:
  %68 = load i32, i32* %11
  %69 = load i32, i32* %6
  %70 = icmp slt i32 %68, %69
  br i1 %70, label %73, label %71
71:
  store i32 8, i32* %8
  br label %85
73:
  %74 = load i32, i32* %11
  %75 = sext i32 %74 to i64
  %76 = getelementptr inbounds [128 x i32], [128 x i32]* %5, i64 0, i64 %75
  %77 = load i32, i32* %76
  %78 = load i32*, i32** %3
  %79 = load i32, i32* %11
  %80 = sext i32 %79 to i64
  %81 = getelementptr inbounds i32, i32* %78, i64 %80
  store i32 %77, i32* %81
  br label %82
82:
  %83 = load i32, i32* %11
  %84 = add nsw i32 %83, 1
  store i32 %84, i32* %11
  br label %67
85:
  %86 = load i32, i32* %6
  store i32 1, i32* %8
  ret i32 %86
}
