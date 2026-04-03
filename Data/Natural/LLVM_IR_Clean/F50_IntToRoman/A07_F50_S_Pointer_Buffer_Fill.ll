define dso_local void @IntToRoman(i32 %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  store i32 %0, i32* %3
  store i8* %1, i8** %4
  %7 = load i8*, i8** %4
  store i8* %7, i8** %5
  br label %8
8:
  %9 = load i32, i32* %3
  %10 = icmp sge i32 %9, 1000
  br i1 %10, label %11, label %16
11:
  %12 = load i8*, i8** %5
  %13 = getelementptr inbounds i8, i8* %12, i32 1
  store i8* %13, i8** %5
  store i8 77, i8* %12
  %14 = load i32, i32* %3
  %15 = sub nsw i32 %14, 1000
  store i32 %15, i32* %3
  br label %8
16:
  %17 = load i32, i32* %3
  %18 = icmp sge i32 %17, 900
  br i1 %18, label %19, label %26
19:
  %20 = load i8*, i8** %5
  %21 = getelementptr inbounds i8, i8* %20, i32 1
  store i8* %21, i8** %5
  store i8 67, i8* %20
  %22 = load i8*, i8** %5
  %23 = getelementptr inbounds i8, i8* %22, i32 1
  store i8* %23, i8** %5
  store i8 77, i8* %22
  %24 = load i32, i32* %3
  %25 = sub nsw i32 %24, 900
  store i32 %25, i32* %3
  br label %26
26:
  %27 = load i32, i32* %3
  %28 = icmp sge i32 %27, 500
  br i1 %28, label %29, label %34
29:
  %30 = load i8*, i8** %5
  %31 = getelementptr inbounds i8, i8* %30, i32 1
  store i8* %31, i8** %5
  store i8 68, i8* %30
  %32 = load i32, i32* %3
  %33 = sub nsw i32 %32, 500
  store i32 %33, i32* %3
  br label %34
34:
  %35 = load i32, i32* %3
  %36 = icmp sge i32 %35, 400
  br i1 %36, label %37, label %44
37:
  %38 = load i8*, i8** %5
  %39 = getelementptr inbounds i8, i8* %38, i32 1
  store i8* %39, i8** %5
  store i8 67, i8* %38
  %40 = load i8*, i8** %5
  %41 = getelementptr inbounds i8, i8* %40, i32 1
  store i8* %41, i8** %5
  store i8 68, i8* %40
  %42 = load i32, i32* %3
  %43 = sub nsw i32 %42, 400
  store i32 %43, i32* %3
  br label %44
44:
  br label %45
45:
  %46 = load i32, i32* %3
  %47 = icmp sge i32 %46, 100
  br i1 %47, label %48, label %53
48:
  %49 = load i8*, i8** %5
  %50 = getelementptr inbounds i8, i8* %49, i32 1
  store i8* %50, i8** %5
  store i8 67, i8* %49
  %51 = load i32, i32* %3
  %52 = sub nsw i32 %51, 100
  store i32 %52, i32* %3
  br label %45
53:
  %54 = load i32, i32* %3
  %55 = icmp sge i32 %54, 90
  br i1 %55, label %56, label %63
56:
  %57 = load i8*, i8** %5
  %58 = getelementptr inbounds i8, i8* %57, i32 1
  store i8* %58, i8** %5
  store i8 88, i8* %57
  %59 = load i8*, i8** %5
  %60 = getelementptr inbounds i8, i8* %59, i32 1
  store i8* %60, i8** %5
  store i8 67, i8* %59
  %61 = load i32, i32* %3
  %62 = sub nsw i32 %61, 90
  store i32 %62, i32* %3
  br label %63
63:
  %64 = load i32, i32* %3
  %65 = icmp sge i32 %64, 50
  br i1 %65, label %66, label %71
66:
  %67 = load i8*, i8** %5
  %68 = getelementptr inbounds i8, i8* %67, i32 1
  store i8* %68, i8** %5
  store i8 76, i8* %67
  %69 = load i32, i32* %3
  %70 = sub nsw i32 %69, 50
  store i32 %70, i32* %3
  br label %71
71:
  %72 = load i32, i32* %3
  %73 = icmp sge i32 %72, 40
  br i1 %73, label %74, label %81
74:
  %75 = load i8*, i8** %5
  %76 = getelementptr inbounds i8, i8* %75, i32 1
  store i8* %76, i8** %5
  store i8 88, i8* %75
  %77 = load i8*, i8** %5
  %78 = getelementptr inbounds i8, i8* %77, i32 1
  store i8* %78, i8** %5
  store i8 76, i8* %77
  %79 = load i32, i32* %3
  %80 = sub nsw i32 %79, 40
  store i32 %80, i32* %3
  br label %81
81:
  br label %82
82:
  %83 = load i32, i32* %3
  %84 = icmp sge i32 %83, 10
  br i1 %84, label %85, label %90
85:
  %86 = load i8*, i8** %5
  %87 = getelementptr inbounds i8, i8* %86, i32 1
  store i8* %87, i8** %5
  store i8 88, i8* %86
  %88 = load i32, i32* %3
  %89 = sub nsw i32 %88, 10
  store i32 %89, i32* %3
  br label %82
90:
  %91 = load i32, i32* %3
  %92 = icmp sge i32 %91, 9
  br i1 %92, label %93, label %100
93:
  %94 = load i8*, i8** %5
  %95 = getelementptr inbounds i8, i8* %94, i32 1
  store i8* %95, i8** %5
  store i8 73, i8* %94
  %96 = load i8*, i8** %5
  %97 = getelementptr inbounds i8, i8* %96, i32 1
  store i8* %97, i8** %5
  store i8 88, i8* %96
  %98 = load i32, i32* %3
  %99 = sub nsw i32 %98, 9
  store i32 %99, i32* %3
  br label %100
100:
  %101 = load i32, i32* %3
  %102 = icmp sge i32 %101, 5
  br i1 %102, label %103, label %108
103:
  %104 = load i8*, i8** %5
  %105 = getelementptr inbounds i8, i8* %104, i32 1
  store i8* %105, i8** %5
  store i8 86, i8* %104
  %106 = load i32, i32* %3
  %107 = sub nsw i32 %106, 5
  store i32 %107, i32* %3
  br label %108
108:
  %109 = load i32, i32* %3
  %110 = icmp sge i32 %109, 4
  br i1 %110, label %111, label %118
111:
  %112 = load i8*, i8** %5
  %113 = getelementptr inbounds i8, i8* %112, i32 1
  store i8* %113, i8** %5
  store i8 73, i8* %112
  %114 = load i8*, i8** %5
  %115 = getelementptr inbounds i8, i8* %114, i32 1
  store i8* %115, i8** %5
  store i8 86, i8* %114
  %116 = load i32, i32* %3
  %117 = sub nsw i32 %116, 4
  store i32 %117, i32* %3
  br label %118
118:
  br label %119
119:
  %120 = load i32, i32* %3
  %121 = icmp sge i32 %120, 1
  br i1 %121, label %122, label %127
122:
  %123 = load i8*, i8** %5
  %124 = getelementptr inbounds i8, i8* %123, i32 1
  store i8* %124, i8** %5
  store i8 73, i8* %123
  %125 = load i32, i32* %3
  %126 = sub nsw i32 %125, 1
  store i32 %126, i32* %3
  br label %119
127:
  %128 = load i8*, i8** %5
  store i8 0, i8* %128
  ret void
}
