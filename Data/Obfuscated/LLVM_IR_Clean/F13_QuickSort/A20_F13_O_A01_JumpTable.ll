define dso_local void @GP4(i32* %0, i32 %1, i32 %2) {
  %4 = alloca i32*
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  store i32* %0, i32** %4
  store i32 %1, i32* %5
  store i32 %2, i32* %6
  %13 = load i32, i32* %5
  %14 = load i32, i32* %6
  %15 = icmp sge i32 %13, %14
  br i1 %15, label %16, label %17
16:
  br label %109
17:
  %19 = load i32*, i32** %4
  %20 = load i32, i32* %6
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds i32, i32* %19, i64 %21
  %23 = load i32, i32* %22
  store i32 %23, i32* %7
  %25 = load i32, i32* %5
  %26 = sub nsw i32 %25, 1
  store i32 %26, i32* %8
  %28 = load i32, i32* %5
  store i32 %28, i32* %9
  br label %29
29:
  %30 = load i32, i32* %9
  %31 = load i32, i32* %6
  %32 = icmp slt i32 %30, %31
  br i1 %32, label %35, label %33
33:
  br label %76
35:
  %37 = load i32*, i32** %4
  %38 = load i32, i32* %9
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i32, i32* %37, i64 %39
  %41 = load i32, i32* %40
  %42 = load i32, i32* %7
  %43 = icmp slt i32 %41, %42
  %44 = zext i1 %43 to i32
  store i32 %44, i32* %10
  %45 = load i32, i32* %10
  %46 = icmp ne i32 %45, 0
  br i1 %46, label %47, label %71
47:
  %48 = load i32, i32* %8
  %49 = add nsw i32 %48, 1
  store i32 %49, i32* %8
  %51 = load i32*, i32** %4
  %52 = load i32, i32* %8
  %53 = sext i32 %52 to i64
  %54 = getelementptr inbounds i32, i32* %51, i64 %53
  %55 = load i32, i32* %54
  store i32 %55, i32* %11
  %56 = load i32*, i32** %4
  %57 = load i32, i32* %9
  %58 = sext i32 %57 to i64
  %59 = getelementptr inbounds i32, i32* %56, i64 %58
  %60 = load i32, i32* %59
  %61 = load i32*, i32** %4
  %62 = load i32, i32* %8
  %63 = sext i32 %62 to i64
  %64 = getelementptr inbounds i32, i32* %61, i64 %63
  store i32 %60, i32* %64
  %65 = load i32, i32* %11
  %66 = load i32*, i32** %4
  %67 = load i32, i32* %9
  %68 = sext i32 %67 to i64
  %69 = getelementptr inbounds i32, i32* %66, i64 %68
  store i32 %65, i32* %69
  br label %71
71:
  br label %73
73:
  %74 = load i32, i32* %9
  %75 = add nsw i32 %74, 1
  store i32 %75, i32* %9
  br label %29
76:
  %78 = load i32*, i32** %4
  %79 = load i32, i32* %8
  %80 = add nsw i32 %79, 1
  %81 = sext i32 %80 to i64
  %82 = getelementptr inbounds i32, i32* %78, i64 %81
  %83 = load i32, i32* %82
  store i32 %83, i32* %12
  %84 = load i32*, i32** %4
  %85 = load i32, i32* %6
  %86 = sext i32 %85 to i64
  %87 = getelementptr inbounds i32, i32* %84, i64 %86
  %88 = load i32, i32* %87
  %89 = load i32*, i32** %4
  %90 = load i32, i32* %8
  %91 = add nsw i32 %90, 1
  %92 = sext i32 %91 to i64
  %93 = getelementptr inbounds i32, i32* %89, i64 %92
  store i32 %88, i32* %93
  %94 = load i32, i32* %12
  %95 = load i32*, i32** %4
  %96 = load i32, i32* %6
  %97 = sext i32 %96 to i64
  %98 = getelementptr inbounds i32, i32* %95, i64 %97
  store i32 %94, i32* %98
  %99 = load i32*, i32** %4
  %100 = load i32, i32* %5
  %101 = load i32, i32* %8
  call void @GP4(i32* %99, i32 %100, i32 %101)
  %102 = load i32*, i32** %4
  %103 = load i32, i32* %8
  %104 = add nsw i32 %103, 2
  %105 = load i32, i32* %6
  call void @GP4(i32* %102, i32 %104, i32 %105)
  br label %109
109:
  ret void
}
