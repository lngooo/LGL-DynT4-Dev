define dso_local void @DEe(i32 %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i32 %0, i32* %3
  store i8* %1, i8** %4
  %10 = load i8*, i8** %4
  store i8* %10, i8** %5
  %12 = load i32, i32* %3
  %13 = sdiv i32 %12, 1000
  store i32 %13, i32* %6
  %14 = load i32, i32* %3
  %15 = srem i32 %14, 1000
  store i32 %15, i32* %3
  br label %16
16:
  %17 = load i32, i32* %6
  %18 = add nsw i32 %17, -1
  store i32 %18, i32* %6
  %19 = icmp ne i32 %17, 0
  br i1 %19, label %20, label %23
20:
  %21 = load i8*, i8** %5
  %22 = getelementptr inbounds i8, i8* %21, i32 1
  store i8* %22, i8** %5
  store i8 77, i8* %21
  br label %16
23:
  %25 = load i32, i32* %3
  %26 = sdiv i32 %25, 100
  store i32 %26, i32* %7
  %27 = load i32, i32* %3
  %28 = srem i32 %27, 100
  store i32 %28, i32* %3
  %29 = load i32, i32* %7
  %30 = icmp eq i32 %29, 9
  br i1 %30, label %31, label %36
31:
  %32 = load i8*, i8** %5
  %33 = getelementptr inbounds i8, i8* %32, i32 1
  store i8* %33, i8** %5
  store i8 67, i8* %32
  %34 = load i8*, i8** %5
  %35 = getelementptr inbounds i8, i8* %34, i32 1
  store i8* %35, i8** %5
  store i8 77, i8* %34
  br label %71
36:
  %37 = load i32, i32* %7
  %38 = icmp sge i32 %37, 5
  br i1 %38, label %39, label %52
39:
  %40 = load i8*, i8** %5
  %41 = getelementptr inbounds i8, i8* %40, i32 1
  store i8* %41, i8** %5
  store i8 68, i8* %40
  %42 = load i32, i32* %7
  %43 = sub nsw i32 %42, 5
  store i32 %43, i32* %7
  br label %44
44:
  %45 = load i32, i32* %7
  %46 = add nsw i32 %45, -1
  store i32 %46, i32* %7
  %47 = icmp ne i32 %45, 0
  br i1 %47, label %48, label %51
48:
  %49 = load i8*, i8** %5
  %50 = getelementptr inbounds i8, i8* %49, i32 1
  store i8* %50, i8** %5
  store i8 67, i8* %49
  br label %44
51:
  br label %70
52:
  %53 = load i32, i32* %7
  %54 = icmp eq i32 %53, 4
  br i1 %54, label %55, label %60
55:
  %56 = load i8*, i8** %5
  %57 = getelementptr inbounds i8, i8* %56, i32 1
  store i8* %57, i8** %5
  store i8 67, i8* %56
  %58 = load i8*, i8** %5
  %59 = getelementptr inbounds i8, i8* %58, i32 1
  store i8* %59, i8** %5
  store i8 68, i8* %58
  br label %69
60:
  br label %61
61:
  %62 = load i32, i32* %7
  %63 = add nsw i32 %62, -1
  store i32 %63, i32* %7
  %64 = icmp ne i32 %62, 0
  br i1 %64, label %65, label %68
65:
  %66 = load i8*, i8** %5
  %67 = getelementptr inbounds i8, i8* %66, i32 1
  store i8* %67, i8** %5
  store i8 67, i8* %66
  br label %61
68:
  br label %69
69:
  br label %70
70:
  br label %71
71:
  %73 = load i32, i32* %3
  %74 = sdiv i32 %73, 10
  store i32 %74, i32* %8
  %75 = load i32, i32* %3
  %76 = srem i32 %75, 10
  store i32 %76, i32* %3
  %77 = load i32, i32* %8
  %78 = icmp eq i32 %77, 9
  br i1 %78, label %79, label %84
79:
  %80 = load i8*, i8** %5
  %81 = getelementptr inbounds i8, i8* %80, i32 1
  store i8* %81, i8** %5
  store i8 88, i8* %80
  %82 = load i8*, i8** %5
  %83 = getelementptr inbounds i8, i8* %82, i32 1
  store i8* %83, i8** %5
  store i8 67, i8* %82
  br label %119
84:
  %85 = load i32, i32* %8
  %86 = icmp sge i32 %85, 5
  br i1 %86, label %87, label %100
87:
  %88 = load i8*, i8** %5
  %89 = getelementptr inbounds i8, i8* %88, i32 1
  store i8* %89, i8** %5
  store i8 76, i8* %88
  %90 = load i32, i32* %8
  %91 = sub nsw i32 %90, 5
  store i32 %91, i32* %8
  br label %92
92:
  %93 = load i32, i32* %8
  %94 = add nsw i32 %93, -1
  store i32 %94, i32* %8
  %95 = icmp ne i32 %93, 0
  br i1 %95, label %96, label %99
96:
  %97 = load i8*, i8** %5
  %98 = getelementptr inbounds i8, i8* %97, i32 1
  store i8* %98, i8** %5
  store i8 88, i8* %97
  br label %92
99:
  br label %118
100:
  %101 = load i32, i32* %8
  %102 = icmp eq i32 %101, 4
  br i1 %102, label %103, label %108
103:
  %104 = load i8*, i8** %5
  %105 = getelementptr inbounds i8, i8* %104, i32 1
  store i8* %105, i8** %5
  store i8 88, i8* %104
  %106 = load i8*, i8** %5
  %107 = getelementptr inbounds i8, i8* %106, i32 1
  store i8* %107, i8** %5
  store i8 76, i8* %106
  br label %117
108:
  br label %109
109:
  %110 = load i32, i32* %8
  %111 = add nsw i32 %110, -1
  store i32 %111, i32* %8
  %112 = icmp ne i32 %110, 0
  br i1 %112, label %113, label %116
113:
  %114 = load i8*, i8** %5
  %115 = getelementptr inbounds i8, i8* %114, i32 1
  store i8* %115, i8** %5
  store i8 88, i8* %114
  br label %109
116:
  br label %117
117:
  br label %118
118:
  br label %119
119:
  %120 = load i32, i32* %3
  %121 = icmp eq i32 %120, 9
  br i1 %121, label %122, label %127
122:
  %123 = load i8*, i8** %5
  %124 = getelementptr inbounds i8, i8* %123, i32 1
  store i8* %124, i8** %5
  store i8 73, i8* %123
  %125 = load i8*, i8** %5
  %126 = getelementptr inbounds i8, i8* %125, i32 1
  store i8* %126, i8** %5
  store i8 88, i8* %125
  br label %162
127:
  %128 = load i32, i32* %3
  %129 = icmp sge i32 %128, 5
  br i1 %129, label %130, label %143
130:
  %131 = load i8*, i8** %5
  %132 = getelementptr inbounds i8, i8* %131, i32 1
  store i8* %132, i8** %5
  store i8 86, i8* %131
  %133 = load i32, i32* %3
  %134 = sub nsw i32 %133, 5
  store i32 %134, i32* %3
  br label %135
135:
  %136 = load i32, i32* %3
  %137 = add nsw i32 %136, -1
  store i32 %137, i32* %3
  %138 = icmp ne i32 %136, 0
  br i1 %138, label %139, label %142
139:
  %140 = load i8*, i8** %5
  %141 = getelementptr inbounds i8, i8* %140, i32 1
  store i8* %141, i8** %5
  store i8 73, i8* %140
  br label %135
142:
  br label %161
143:
  %144 = load i32, i32* %3
  %145 = icmp eq i32 %144, 4
  br i1 %145, label %146, label %151
146:
  %147 = load i8*, i8** %5
  %148 = getelementptr inbounds i8, i8* %147, i32 1
  store i8* %148, i8** %5
  store i8 73, i8* %147
  %149 = load i8*, i8** %5
  %150 = getelementptr inbounds i8, i8* %149, i32 1
  store i8* %150, i8** %5
  store i8 86, i8* %149
  br label %160
151:
  br label %152
152:
  %153 = load i32, i32* %3
  %154 = add nsw i32 %153, -1
  store i32 %154, i32* %3
  %155 = icmp ne i32 %153, 0
  br i1 %155, label %156, label %159
156:
  %157 = load i8*, i8** %5
  %158 = getelementptr inbounds i8, i8* %157, i32 1
  store i8* %158, i8** %5
  store i8 73, i8* %157
  br label %152
159:
  br label %160
160:
  br label %161
161:
  br label %162
162:
  %163 = load i8*, i8** %5
  store i8 0, i8* %163
  ret void
}
