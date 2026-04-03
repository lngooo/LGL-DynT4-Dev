define dso_local i32 @RemoveDuplicates(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca [128 x i32]
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 0, i32* %6
  store i32 0, i32* %7
  br label %16
16:
  %17 = load i32, i32* %7
  %18 = load i32, i32* %4
  %19 = icmp slt i32 %17, %18
  br i1 %19, label %22, label %20
20:
  store i32 2, i32* %8
  br label %76
22:
  store i32 0, i32* %9
  store i32 0, i32* %10
  br label %25
25:
  %26 = load i32, i32* %10
  %27 = icmp slt i32 %26, 1
  br i1 %27, label %30, label %28
28:
  store i32 5, i32* %8
  br label %58
30:
  store i32 0, i32* %11
  br label %32
32:
  %33 = load i32, i32* %11
  %34 = load i32, i32* %6
  %35 = icmp slt i32 %33, %34
  br i1 %35, label %38, label %36
36:
  store i32 8, i32* %8
  br label %54
38:
  %39 = load i32, i32* %11
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds [128 x i32], [128 x i32]* %5, i64 0, i64 %40
  %42 = load i32, i32* %41
  %43 = load i32*, i32** %3
  %44 = load i32, i32* %7
  %45 = sext i32 %44 to i64
  %46 = getelementptr inbounds i32, i32* %43, i64 %45
  %47 = load i32, i32* %46
  %48 = icmp eq i32 %42, %47
  br i1 %48, label %49, label %50
49:
  store i32 1, i32* %9
  br label %50
50:
  br label %51
51:
  %52 = load i32, i32* %11
  %53 = add nsw i32 %52, 1
  store i32 %53, i32* %11
  br label %32
54:
  br label %55
55:
  %56 = load i32, i32* %10
  %57 = add nsw i32 %56, 1
  store i32 %57, i32* %10
  br label %25
58:
  %59 = load i32, i32* %9
  %60 = icmp ne i32 %59, 0
  br i1 %60, label %71, label %61
61:
  %62 = load i32*, i32** %3
  %63 = load i32, i32* %7
  %64 = sext i32 %63 to i64
  %65 = getelementptr inbounds i32, i32* %62, i64 %64
  %66 = load i32, i32* %65
  %67 = load i32, i32* %6
  %68 = add nsw i32 %67, 1
  store i32 %68, i32* %6
  %69 = sext i32 %67 to i64
  %70 = getelementptr inbounds [128 x i32], [128 x i32]* %5, i64 0, i64 %69
  store i32 %66, i32* %70
  br label %71
71:
  br label %73
73:
  %74 = load i32, i32* %7
  %75 = add nsw i32 %74, 1
  store i32 %75, i32* %7
  br label %16
76:
  store i32 0, i32* %12
  br label %78
78:
  %79 = load i32, i32* %12
  %80 = load i32, i32* %6
  %81 = icmp slt i32 %79, %80
  br i1 %81, label %84, label %82
82:
  store i32 11, i32* %8
  br label %96
84:
  %85 = load i32, i32* %12
  %86 = sext i32 %85 to i64
  %87 = getelementptr inbounds [128 x i32], [128 x i32]* %5, i64 0, i64 %86
  %88 = load i32, i32* %87
  %89 = load i32*, i32** %3
  %90 = load i32, i32* %12
  %91 = sext i32 %90 to i64
  %92 = getelementptr inbounds i32, i32* %89, i64 %91
  store i32 %88, i32* %92
  br label %93
93:
  %94 = load i32, i32* %12
  %95 = add nsw i32 %94, 1
  store i32 %95, i32* %12
  br label %78
96:
  %97 = load i32, i32* %6
  store i32 1, i32* %8
  ret i32 %97
}
