define dso_local void @ShellSort(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32**
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  %13 = load i32, i32* %4
  %14 = sdiv i32 %13, 2
  store i32 %14, i32* %5
  br label %15
15:
  %16 = load i32, i32* %5
  %17 = icmp sgt i32 %16, 0
  br i1 %17, label %20, label %18
18:
  store i32 2, i32* %6
  br label %108
20:
  store i32 0, i32* %7
  br label %22
22:
  %23 = load i32, i32* %7
  %24 = load i32, i32* %5
  %25 = icmp slt i32 %23, %24
  br i1 %25, label %28, label %26
26:
  store i32 5, i32* %6
  br label %104
28:
  %30 = load i32, i32* %7
  %31 = load i32, i32* %5
  %32 = add nsw i32 %30, %31
  store i32 %32, i32* %8
  br label %33
33:
  %34 = load i32, i32* %8
  %35 = load i32, i32* %4
  %36 = icmp slt i32 %34, %35
  br i1 %36, label %39, label %37
37:
  store i32 8, i32* %6
  br label %100
39:
  %41 = load i32*, i32** %3
  %42 = load i32, i32* %8
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds i32, i32* %41, i64 %43
  %45 = load i32, i32* %44
  store i32 %45, i32* %9
  %47 = load i32, i32* %8
  %48 = load i32, i32* %5
  %49 = sub nsw i32 %47, %48
  store i32 %49, i32* %10
  br label %50
50:
  %51 = load i32, i32* %10
  %52 = load i32, i32* %7
  %53 = icmp sge i32 %51, %52
  br i1 %53, label %54, label %86
54:
  store i32** %3, i32*** %11
  %56 = load i32**, i32*** %11
  %57 = load i32*, i32** %56
  %58 = load i32, i32* %10
  %59 = sext i32 %58 to i64
  %60 = getelementptr inbounds i32, i32* %57, i64 %59
  %61 = load i32, i32* %60
  %62 = load i32, i32* %9
  %63 = icmp sgt i32 %61, %62
  br i1 %63, label %64, label %80
64:
  %65 = load i32**, i32*** %11
  %66 = load i32*, i32** %65
  %67 = load i32, i32* %10
  %68 = sext i32 %67 to i64
  %69 = getelementptr inbounds i32, i32* %66, i64 %68
  %70 = load i32, i32* %69
  %71 = load i32*, i32** %3
  %72 = load i32, i32* %10
  %73 = load i32, i32* %5
  %74 = add nsw i32 %72, %73
  %75 = sext i32 %74 to i64
  %76 = getelementptr inbounds i32, i32* %71, i64 %75
  store i32 %70, i32* %76
  %77 = load i32, i32* %5
  %78 = load i32, i32* %10
  %79 = sub nsw i32 %78, %77
  store i32 %79, i32* %10
  br label %81
80:
  store i32 12, i32* %6
  br label %82
81:
  store i32 0, i32* %6
  br label %82
82:
  %84 = load i32, i32* %6
  switch i32 %84, label %109 [
    i32 0, label %85
    i32 12, label %86
  ]
85:
  br label %50
86:
  %87 = load i32, i32* %9
  %88 = load i32*, i32** %3
  %89 = load i32, i32* %10
  %90 = load i32, i32* %5
  %91 = add nsw i32 %89, %90
  %92 = sext i32 %91 to i64
  %93 = getelementptr inbounds i32, i32* %88, i64 %92
  store i32 %87, i32* %93
  br label %96
96:
  %97 = load i32, i32* %5
  %98 = load i32, i32* %8
  %99 = add nsw i32 %98, %97
  store i32 %99, i32* %8
  br label %33
100:
  br label %101
101:
  %102 = load i32, i32* %7
  %103 = add nsw i32 %102, 1
  store i32 %103, i32* %7
  br label %22
104:
  br label %105
105:
  %106 = load i32, i32* %5
  %107 = sdiv i32 %106, 2
  store i32 %107, i32* %5
  br label %15
108:
  ret void
109:
  unreachable
}
